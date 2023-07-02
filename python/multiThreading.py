import threading

def print_firstName(first):
    print(first + " " , end = "")

def print_lastName(last):
    print(last, end = "")

if __name__ == "__main__":
    f = input("enter your first name")
    l = input("enter your last name")
    thread1 = threading.Thread(target=print_firstName, args=(f,))
    thread2 = threading.Thread(target=print_lastName, args=(l,))

    thread1.start()
    thread2.start()

    thread1.join()
    thread2.join()

