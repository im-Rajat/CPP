# Loops

- If we need to output something 10 times, we need to write that same thing again & again 10 times. Here Loops make things easier for us.

    ```cpp
    // without loop

    cout << "Hello" <<endl;
    cout << "Hello" <<endl;
    cout << "Hello" <<endl;
    ......................
    ......................

    // with loop

    for (int i = 0; i < 10; i++) {
        cout << "Hello" << endl;
    }
    ```

- Loops can execute a block of code as long as a specified condition is met.
- Loops are handy because they save time, reduce errors, and they make code more readable.
- There are mainly two types of loops :

### Entry Controlled Loops

- The test condition is tested before entering the loop body.
- **for loop & while loop**

### Exit Controlled Loops
- Test condition is tested or evaluated at the end of the loop body.
- Therefore, the loop body will execute at least once, irrespective of whether the test condition is true or false
- **do-while loop**

### for loop

- The `for` loop is generally used when the number of iterations is known in advance.

    ```cpp
    for (initialization; condition; update) {
        // code to be executed
    }

    for (int i = 0; i < 5; ++i) {
        // code to be executed 5 times
    }

    for (auto element : arr) {
        // code
    }
    ```
    
- For Loop Flow Chart :  
<img src = images/for_loop_flowchart.jpg alt="For Loop Flow Chart" width="400">


- For loop is a counter-controlled loop.
- Usually for loop is written with counter. `for(int i = 0; i < n; i++)` here i is a counter
- for loop can be written like this for(;;)

### while loop

- The `while` loop is generally used when the number of iterations is not known in advance, and it continues to execute as long as a specified condition is true.

    ```cpp
    initialization expression;
    while (test_expression) {
        // statements
        update_expression;
    }

    int i = 0;
    while (i < 5) {
        // code to be executed as long as i is less than 5
        ++i;
    }
    ```

- While & Do-While Loop Flow Chart :  
<img src = images/while_do_while_flowchart.jpg alt="For Loop Flow Chart" width="400">

###  do-while loop

- The do-while loop is similar to the while loop, but in the do-while loop the condition is tested at the end of the loop body.
- It always executes the code block at least once, even if the condition is initially false.

    ```cpp
    initialization expression;
    do
    {
        // statements
        update_expression;
    } while (test_expression);

    int i = 0;
    do {
        // code to be executed at least once
        ++i;
    } while (i < 5);
    ```

### Range-based for loop / for-each loop

- Range-based for loop has been added since C++ 11.
- A convenient and concise way to iterate over elements in a range, such as an array, container, or any sequence of elements.
  
    ```cpp
    for ( range_declaration : range_expression ) {
        //  loop_statement
    }

    int arr[] = {1, 2, 3, 4, 5};
    for (int value : arr) {
        cout << value << " ";
    }

    vector<int> vec = {1, 2, 3, 4, 5};
    for (int value : vec) {
        cout << value << " ";
    }
    ```

### Break statement in loops

- The `break` statement can also be used to jump out of a loop.
  
    ```cpp
    // This program jumps out of the loop when i is equal to 4:

    for (int i = 0; i < 10; i++) {
        if (i == 4) {
            break;
        }
        cout << i << endl;
    }
    ```
- `break` statement can apply in other loops as well.

### Continue statement in loops

- The `continue` statement breaks one iteration (in the loop) if a specified condition occurs, and continues with the next iteration in the loop.

    ```cpp
    for (int i = 0; i < 10; i++) {
        if (i == 4) {
            continue;
        }
        cout << i << endl;
    }
    ```

- `continue` statement can apply in other loops as well.