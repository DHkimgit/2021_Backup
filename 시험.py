class class_sample():
    z = 1
    def __init__(self):
        self.z=2
        print("r : ", self.z)
    def class_func(self):
        print("f : ", class_sample.z)
    def instance_func(self):
        print("z : ", self.z)
        
instance_sample = class_sample
instance_sample.instance_func()