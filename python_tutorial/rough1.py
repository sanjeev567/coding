class vec2D:
    def __init__(self, i, j):
        self.icap =i
        self.jcap =j
    
    def __str__(self):
        return f"{self.icap}i + {self.jcap}j"
    
class vec3D(vec2D):
    def __init__(self, i, j, k):
        super().__init__(i, j)
        self.kcap = k
    
    def __str__(self):
        return f"{self.icap}i + {self.jcap}j + {self.kcap}k"

v2d = vec2D(5, 4)
v3d = vec3D(3, 4, 5)
print(v2d)
print(v3d)