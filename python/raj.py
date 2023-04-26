from tkinter import *

window = Tk()

window.title('Weight Converter')
def from_kg():
  gram = float(user_value.get()) * 1000
  pounds = float(user_value.get()) * 2.20462
  ounce = float(user_value.get()) * 35.274

  t1.delete("1.0", END)
  t1.insert(END, gram)
  
  t2.delete("1.0", END)
  t2.insert(END, pounds)
  
  t3.delete("1.0", END)
  t3.insert(END, ounce)



e1 = Label(window, text="Enter the weight in kg")
user_value = StringVar()
e2 = Entry(window, textvariable=user_value)
e3 = Label(window, text = 'Gram')
e4 = Label(window, text = 'Pounds')
e5 = Label(window, text = 'Ounce')

t1 = Text(window, height=1, width = 20)
t2 = Text(window, height=1, width = 20)
t3 = Text(window, height=1, width = 20)

b1 = Button(window, text="Convert", command=from_kg)

e1.grid(row=0, column=0)
e2.grid(row=0, column=1)
e3.grid(row=1, column=0)
e4.grid(row=1, column=1)
e5.grid(row=1, column=2)
t1.grid(row=2, column=0)
t2.grid(row=2, column=1)
t3.grid(row=2, column=2)
b1.grid(row=0, column=2)



window.mainloop()