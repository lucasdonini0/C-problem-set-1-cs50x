# C Problem Set 1 - cs50x

Project Breakdown
🧱 Mario (Less)

A program that recreates a right-aligned pyramid using hashes (#).

    The Goal: Take a user-defined height and print a staircase-style pyramid.

    Technical Logic: Utilizes nested for loops. The outer loop handles the rows, while two inner loops calculate the exact number of spaces and hashes needed for each line based on the formula: Spaces = Height - CurrentRow.

💰 Cash

An implementation of a "Greedy Algorithm" to determine the minimum number of coins for change.

    The Goal: Calculate how many quarters, dimes, nickels, and pennies are needed for a specific value.

    Technical Logic: Uses integer division to find the maximum number of the largest possible coin (25¢,10¢,5¢,1¢) and the modulo operator (%) to track the remaining balance after each step.

💳 Credit

A robust program that validates credit card numbers and identifies the card issuer.

    The Goal: Determine if a card is valid and if it is American Express, Mastercard, or Visa.

    Technical Logic: Implements Luhn’s Algorithm using purely mathematical operations. Since no strings were used, I isolated digits using % 10 (to get the last digit) and / 10 (to remove it), then performed a weighted checksum to verify authenticity.

👋 Hello Me

A fundamental introductory program.

    The Goal: Prompt a user for their name and print a personalized greeting.

    Technical Logic: Built using standard I/O functions (scanf and printf), focusing on managing character buffers without external helper libraries.
