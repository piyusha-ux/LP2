#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the name of the Employee" << endl;
    string name, domain, gender;
    int no_of_tasks, avg_hours, salary, prev_rating, no_of_presentation, age, experience, no_of_leaves;
    cin >> name;
    cout << "In which domain " << name << " is working (web/testing/design)" << endl;
    cin >> domain;
    cout << "What is the gender of " << name << " (M/F)" << endl;
    cin >> gender;
    cout << "Lets evaluate the performance of " << name << " " << endl;
    cout << endl;
    cout << "What is the number of tasks successfully completed by " << name << " out of 10" << endl;
    cin >> no_of_tasks;
    cout << "What is the average hours " << name << " has worked each week " << endl;
    cin >> avg_hours;
    cout << "What is the salary of " << name << " per year " << endl;
    cin >> salary;
    cout << "What is the previous rating of " << name << " out of 5 " << endl;
    cin >> prev_rating;
    cout << "How many presentation does " << name << " given last year" << endl;
    cin >> no_of_presentation;
    cout << "What is the age of the employee" << endl;
    cin >> age;
    cout << "What is the experience of " << name << " " << endl;
    cin >> experience;
    cout << "How many leave " << name << " has taken last year" << endl;
    cin >> no_of_leaves;
    int rat = 0;

    if (no_of_presentation >= 10)
    {
        rat++;
    }
    if (no_of_leaves <= 20)
    {
        rat++;
    }
    if (no_of_tasks > 8)
    {
        rat += 2;
    }
    if (avg_hours > 49)
    {
        rat++;
    }
    cout << "The evaluation of " << name << endl;
    cout << "This year rating is " << rat << endl;

    if (gender == "M")
    {
        if (domain == "web")
        {
            if (avg_hours >= 37 and no_of_tasks >= 7)
            {
                if (salary <= 800000)
                {
                    cout << "Acccording to the performance of " << name << " the salaray should be incremented by 100000" << endl;
                }

                else
                {
                    cout << "Acccording to the performance of " << name << " the salaray should remain same" << endl;
                }
            }
            else
            {
                if (salary >= 1500000)
                {
                    cout << "Acccording to the performance of " << name << " the salaray should be decremented by 100000" << endl;
                }
                else
                {
                    cout << "Acccording to the performance of " << name << " the salaray should remain same" << endl;
                }
            }
        }
        else if (domain == "testing")
        {
            if (avg_hours >= 40 and no_of_tasks > 8)
            {
                if (salary <= 500000)
                {
                    cout << "Acccording to the performance of " << name << " the salaray should be incremented by 100000" << endl;
                }

                else
                {
                    cout << "Acccording to the performance of " << name << " the salary should remain same" << endl;
                }
            }
            else
            {
                if (salary >= 1000000)
                {
                    cout << "Acccording to the performance of " << name << " the salaray should be decremented by 100000" << endl;
                }
                else
                {
                    cout << "Acccording to the performance of " << name << " the salaray should remain same" << endl;
                }
            }
        }
        else if (domain == "design")
        {
            if (avg_hours >= 37 and no_of_tasks > 6)
            {
                if (salary <= 1000000)
                {
                    cout << "Acccording to the performance of " << name << " the salaray should be incremented by 100000" << endl;
                }

                else
                {
                    cout << "Acccording to the performance of " << name << " the salaray should remain same" << endl;
                }
            }
            else
            {
                if (salary > 1800000)
                {
                    cout << "Acccording to the performance of " << name << " the salaray should be decremented by 100000" << endl;
                }
                else
                {
                    cout << "Acccording to the performance of " << name << " the salaray should remain same" << endl;
                }
            }
        }
        if (rat > prev_rating)
        {
            cout << "The rating of " << name << " has increased. He has performed well this year" << endl;
        }
        else if (rat < prev_rating and age < 25)
        {
            cout << "The employee has underperformed but can be trained for effective performance" << endl;
        }
        else if (rat < prev_rating and age > 25)
        {
            cout << "The employee has underperformed and proved to be unproductive for the company" << endl;
        }
        else
        {
            cout << "The performance of the employee is maintained" << endl;
        }
        if (experience > 8 and prev_rating == 5)
        {
            cout << name << " should get a promotion in the company" << endl;
        }
    }
    if (gender == "F")
    {
        if (domain == " web")
        {
            if (avg_hours >= 30 and no_of_tasks > 7)
            {
                if (salary <= 800000)
                {
                    cout << "Acccording to the performance of " << name << " the salaray should be incremented by 100000" << endl;
                }
                else if (salary >= 1500000)
                {
                    cout << "Acccording to the performance of " << name << " the salaray should be decremented by 100000" << endl;
                }
                else
                {
                    cout << "Acccording to the performance of " << name << " the salaray should remain same" << endl;
                }
            }
        }
        else if (domain == " testing")
        {
            if (avg_hours >= 35 and no_of_tasks > 8)
            {
                if (salary <= 500000)
                {
                    cout << "Acccording to the performance of " << name << " the salaray should be incremented by 100000" << endl;
                }
                else if (salary >= 1000000)
                {
                    cout << "Acccording to the performance of " << name << " the salaray should be decremented by 100000" << endl;
                }
                else
                {
                    cout << "Acccording to the performance of " << name << " the salaray should remain same" << endl;
                }
            }
        }
        else if (domain == " design")
        {
            if (avg_hours >= 32 and no_of_tasks > 6)
            {
                if (salary <= 1000000)
                {
                    cout << "Acccording to the performance of " << name << " the salaray should be incremented by 100000" << endl;
                }
                else if (salary > 1800000)
                {
                    cout << "Acccording to the performance of " << name << " the salaray should be decremented by 100000" << endl;
                }
                else
                {
                    cout << "Acccording to the performance of " << name << " the salaray should remain same" << endl;
                }
            }
        }
        if (rat > prev_rating)
        {
            cout << "The rating of " << name << " has increased. He has performed well this year" << endl;
        }
        else if (rat < prev_rating and age < 25)
        {
            cout << "The employee has underperformed but can be trained for effective performance" << endl;
        }
        else if (rat < prev_rating and age > 25)
        {
            cout << "The employee has underperformed and proved to be unproductive for the company" << endl;
        }
        else
        {
            cout << "The performance of the employee is maintained" << endl;
        }
        if (experience > 8 and prev_rating == 5)
        {
            cout << name << " should get a promotion in the company" << endl;
        }
    }
}