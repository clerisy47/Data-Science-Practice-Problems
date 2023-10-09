class HashTable:
    def __init__(self, max=10):
        self.max = max
        self.arr = [[]]*self.max

    def get_hash(self, key):
        hash = 0
        for char in key:
            hash += ord(char)
        return hash % self.max
    
    def __setitem__(self, key, val):
        hash = self.get_hash(key)
        self.arr[hash].append((key, val))

    def __getitem__(self, key):
        hash = self.get_hash(key)
        for i in self.arr[hash]:
            if i[0] == key:
                return i[1]
    
    def __delitem__(self, key):
        hash = self.get_hash(key)
        for i, element in enumerate(self.arr[hash]):
            if element[0] == key:
                del self.arr[hash][i]
    

if __name__ == "__main__":
    t = HashTable()
    t["March 6"] = 69
    t["March 17"] = 32
    t["hehe"] = 54
    del t["hehe"]
    print(t['March 6'])
    print(t["March 17"])
    print(t['hehe'])
    
