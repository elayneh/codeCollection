class PlayerCharacter:
    def __init__(self, name, age):
        self.name = name
        self.age = age
    def run(self):
        print('run')
    def speak(self):
        print("my name is + " self.name + " and i am + " self.age + " years old.")
player1 = PlayerCharacter("belayneh", 23)
player1.speak()
"belayneh".
