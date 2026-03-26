import tkinter as tk
from tkinter import messagebox

balance = 0
history = []

def deposit():
    global balance
    amount = entry.get()

    if amount.isdigit():
        amount = int(amount)
        balance += amount
        history.append(f"Deposited: ₹{amount}")
        update_balance()
    else:
        messagebox.showerror("Error", "Enter a valid amount")

def withdraw():
    global balance
    amount = entry.get()

    if amount.isdigit():
        amount = int(amount)

        if amount > balance:
            messagebox.showwarning("Warning", "Insufficient Balance")
        else:
            balance -= amount
            history.append(f"Withdrawn: ₹{amount}")
            update_balance()
    else:
        messagebox.showerror("Error", "Enter a valid amount")

def update_balance():
    balance_label.config(text=f"Balance: ₹{balance}")

def show_history():
    history_window = tk.Toplevel(root)
    history_window.title("Transaction History")

    for item in history:
        tk.Label(history_window, text=item).pack()

root = tk.Tk()
root.title("ATM Machine")
root.geometry("400x300")

title = tk.Label(root, text="ATM Software", font=("Arial", 16))
title.pack(pady=10)

balance_label = tk.Label(root, text="Balance: ₹0", font=("Arial", 12))
balance_label.pack()

entry = tk.Entry(root)
entry.pack(pady=10)

deposit_btn = tk.Button(root, text="Deposit", command=deposit)
deposit_btn.pack(pady=5)

withdraw_btn = tk.Button(root, text="Withdraw", command=withdraw)
withdraw_btn.pack(pady=5)

history_btn = tk.Button(root, text="Transaction History", command=show_history)
history_btn.pack(pady=10)

root.mainloop()