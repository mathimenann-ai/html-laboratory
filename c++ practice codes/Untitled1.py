#student Marks , percentage and grade 
name=input("Enter your name: ")
n=int(input("Enter number of subjects :"))
total=0
for i in range(1,n+1):
    mark=float(input(f"enter mark for subject{i}"))
    total+=mark
percentage=total/n
if percentage>=90:
    grade="A+"
    performance="outstanding"
elif percentage >=80:
    grade="A"
    performance="excellent"
elif percentage >=70:
    grade="B"
    performance="very Good"
elif percentage >=60:
    grade="C"
    performace="good"
elif percentage >=50:
    grade="D"
    performace="average"

else:
    grade = "F"
    performance = "Needs Improvement"
    print("\n--- Academic Performance ---")
    print("Student Name :", name)
    print("Total Marks :", total)
    print("Percentage :", round(percentage, 2), "%")
    print("Grade :", grade)
    print("Performance :", performance)


    


