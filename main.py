# This is my guess game Python script.

# Press Shift+F10 to execute it or replace it with your code.
# Press Double Shift to search everywhere for classes, files, tool windows, actions, and settings.
import random


def print_hi(name):
    # Use a breakpoint in the code line below to debug your script.
    print(f'Hi, {name}')  # Press Ctrl+F8 to toggle the breakpoint.

# Press the green button in the gutter to run the script.
if __name__ == '__main__':
    print_hi('WELCOME TO MY GUESS GAME\n')

    print("GUESS THE NUMBER GAME")
    #var = a, b, c, d, e, f, g, h, i
    no = 0
    again = 0
    rar = 0

while again != 2:

#while is incase user wants to try again

    print("-----------------------GUESS THE NUMBER------------------------\n")

    print("-----------------------CHOOSE DIFFICULTY------------------------\n")
    print("1 --EASY-------------")
    print("2 --MEDIUM-----------")
    print("3 --HARD-------------")
    print("4 --EXTREME----------")
##diffculty starts
    num = int(input("input number: "))

    if num == 1:
        print('you have chosen easy.\n')
        print('Guess the number chose from 0 to 9')
        nua = int(input())
        print("you have chosen",nua)

    elif num == 2:
        print('you have chosen medium')
        print('Guess the number chose from 0 to 99')
        nua = int(input())
        print("you have chosen", nua)

    elif num == 3:
        print('you have chosen hard')
        print('you have chosen medium')
        print('chose from 0 to 999')
        nua = int(input())
        print("you have chosen", nua)

    elif num == 4:
        print('you have chosen extreme')
        print('you have chosen medium')
        print('chose from 0 to 9999')
        nua = int(input())
        print("you have chosen", nua)
    else:
        print('wrong input')
## difficulty ends

# the users input another number to guess the number

    value = False

    if num == 1:
            rar = random.randint(0, 9)
            print('CPU number is: ',rar)

    elif num == 2:
            rar = random.randint(0, 9)
            print(rar)
            print('Guess the number',rar)

    elif num == 3:
            rar = random.randint(0, 9)
            print(rar)
            print('Guess the number',rar)

    elif num == 4:
        rar = random.randint(0, 9)
        print(rar)
        print('Guess the number',rar)

## ends here

        #To generate random number
        """rar = random.randint(0, 9)
        print(rar)"""
        # ends here to generate number

##  This part is to make see if user guessed the number
    #for easy
    if rar == num:
        print('correct')
        print('wanna play again?')
        print('1 for yes')
        print('2 for no')
        again = int(input())


    else:
        print("Wrong Guess")
        print('wanna play again?')
        print('1 for yes')
        print('2 for no')
        again = int(input())

   # while play == 1:

    #    print("lets go again")


    while again != 1:
        print("THANKS FOR PLAYING")
        break




    #while  input() == 1:
     #   print("you tried again")
      #  continue






# See PyCharm help at https://www.jetbrains.com/help/pycharm/
