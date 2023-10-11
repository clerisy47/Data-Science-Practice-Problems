import math
import copy
import numpy as np

def sigmoid(z):
    """
    Compute the sigmoid of z

    Args:
        z (ndarray): A scalar, numpy array of any size.

    Returns:
        g (ndarray): sigmoid(z), with the same shape as z
         
    """
    g = 1/(1+np.exp(-z))
    
    return g

def compute_cost(X, y, W, b): 
    """
    Computes the cost function for linear regression.
    
    Args:
        X (ndarray): Shape (m,n) Input to the model 
        y (ndarray): Shape (m,1) Label
        W, b (scalar): Parameters of the model
    
    Returns
        total_cost (float): The cost of using W, b as the parameters for linear regression
               to fit the data points in X and y
    """
    m = X.shape[0] 
    
    total_cost = 0

    cost=0
    for i in range(m):
        z = np.dot(X[i], W) + b
        f_Wb = sigmoid(z)
        cost += -y[i]*np.log(f_Wb) - (1-y[i])*np.log(1-f_Wb)
    total_cost = cost/m

    return total_cost

def compute_gradient(X, y, W, b): 
    """
    Computes the gradient for logistic regression 
 
    Args:
      X : (ndarray Shape (m,n)) variable such as house size 
      y : (array_like Shape (m,1)) actual value 
      W : (array_like Shape (n,1)) values of parameters of the model      
      b : (scalar) value of parameter of the model 
    Returns
      dj_dW (array_like Shape (n,1)): The gradient of the cost w.r.t. the parameters W
      dj_db (scalar): The gradient of the cost w.r.t. the parameter b  
    """
    m, n = X.shape
    dj_dW = np.zeros(W.shape)
    dj_db = 0.

    for i in range(m):
        f_Wb_i = sigmoid(np.dot(X[i], W) + b)          
        err_i  = f_Wb_i  - y[i]                       
        for j in range(n):
            dj_dW[j] = dj_dW[j] + err_i * X[i,j]      
        dj_db = dj_db + err_i
    dj_dW = dj_dW/m                                   
    dj_db = dj_db/m                                   
        
    return dj_db, dj_dW

def gradient_descent(X, y, W_in, b_in, cost_function, gradient_function, alpha, num_iters): 
    """
    Performs batch gradient descent to learn theta. Updates theta by taking 
    num_iters gradient steps with learning rate alpha
    
    Args:
      X :    (ndarray): Shape (m,)
      y :    (ndarray): Shape (m,)
      W_in, b_in : (scalar) Initial values of parameters of the model
      cost_function: function to compute cost
      gradient_function: function to compute the gradient
      alpha : (float) Learning rate
      num_iters : (int) number of iterations to run gradient descent
    Returns
      W : (ndarray): Shape (1,) Updated values of parameters of the model after
          running gradient descent
      b : (scalar)                Updated value of parameter of the model after
          running gradient descent
    """
        
    J_history = []
    W_history = []
    W = copy.deepcopy(W_in)
    b = b_in
    for i in range(num_iters):

        dj_db, dj_dW = gradient_function(X, y, W, b )  

        W -= alpha * dj_dW               
        b -= alpha * dj_db               

        if i < 100000:
            cost = cost_function(X, y, W, b)
            J_history.append(cost)

        if i % math.ceil(num_iters/10) == 0:
            W_history.append(W)
            print(f"Iteration {i:4}: Cost {float(J_history[-1]):8.2f}   ")
        
    return W, b, J_history, W_history
