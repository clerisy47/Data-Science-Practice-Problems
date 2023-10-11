import math
import copy

def compute_cost(X, y, W, b): 
    """
    Computes the cost function for linear regression.
    
    Args:
        X (ndarray): Shape (m,) Input to the model 
        y (ndarray): Shape (m,)
        W, b (scalar): Parameters of the model
    
    Returns
        total_cost (float): The cost of using W, b as the parameters for linear regression
               to fit the data points in X and y
    """
    m = X.shape[0] 
    
    total_cost = 0

    cost=0
    for i in range(m):
        f_Wb = W*X[i]+b
        cost += (f_Wb - y[i])**2
 
    total_cost = cost/(2*m)
    
    return total_cost

def compute_gradient(X, y, W, b): 
    """
    Computes the gradient for linear regression 
    Args:
      X : (ndarray Shape (m,n)) variable such as house size 
      y : (array_like Shape (m,1)) actual value 
      W : (array_like Shape (n,1)) values of parameters of the model      
      b : (scalar)                 value of parameter of the model 
    Returns
      dj_dW (scalar): The gradient of the cost w.r.t. the parameters W
      dj_db (scalar): The gradient of the cost w.r.t. the parameter b  
    """
    
    m = X.shape[0]
    
    dj_dW = 0
    dj_db = 0
    
    for i in range(m):
        f_Wb = W*X[i]+b
        dj_db += f_Wb - y[i]
        dj_dW += (f_Wb - y[i])*X[i]
    dj_dW /= m
    dj_db /= m
            
    return dj_dW, dj_db


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
      b : (scalar)  Updated value of parameter of the model after
          running gradient descent
    """
    
    J_history = []
    W_history = []
    W = copy.deepcopy(W_in)
    b = b_in
    for i in range(num_iters):

        dj_dW, dj_db = gradient_function(X, y, W, b )  

        W = W - alpha * dj_dW               
        b = b - alpha * dj_db               

        if i<100000:
            cost =  cost_function(X, y, W, b)
            J_history.append(cost)

        if i% math.ceil(num_iters/10) == 0:
            W_history.append(W)
            print(f"Iteration {i:4}: Cost {float(J_history[-1]):8.2f}   ")
        
    return W, b, J_history, W_history
