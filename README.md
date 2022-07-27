# Threads
Έστω ένας δυσδιάστατος πίνακας ακεραίων Α (ΝxN). Tο παραπανω  πρόγραμμα το βρίσκει το 'μέγιστο' στοιχείο του πίνακα Α [με τη βοήθεια ‘p’ threads όπου το κάθε thread θα υπολογίζει το επιμέρους μέγιστο Ν/p γραμμών του πίνακα – τα 'p', 'Ν', 'Α' θα πρέπει να τα δίνει ο χρήστης – επίσης θεωρείστε ότι το 'Ν' είναι ακέραιο πολλαπλάσιο του 'p']. Πιο συγκεκριμένα, το κάθε thread θα πρέπει (α) να υπολογίζει τοπικά τo επιμέρους μέγιστο για τα στοιχεία/γραμμές που του αναλογούν, και (β) να ενημερώνει στο τέλος με το τοπικό του άθροισμα μια κοινή μεταβλητή η οποία θα αντιπροσωπεύει το τελικό μέγιστο του πίνακα. Το τελικό αυτό μέγιστο θα πρέπει στο τέλος να τυπώνεται στην οθόνη.
