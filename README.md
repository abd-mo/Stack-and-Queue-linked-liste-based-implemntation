# Stack-and-Queue-linked-liste-based-implemntation







![1](https://user-images.githubusercontent.com/32440404/52535821-10012200-2d64-11e9-9219-3210427e0398.jpg)


As we see in the picture above our program has a two main functions, in the following lines we will try to illustrate the implantation level of each function.

1-Frist function which has (Sort Stack): 
--------------------------------------------------
**Analysis:**

- We want to Sort a stack (A) using a temporary stack (B), with take into consideration the Stack Structure’s will be “linked list based implantation”.
-we will ask the user to enter a 15 integer numbers then after every entering the program will show the state of every stack during the sorting operation

**Design and programmer level:**

-First we will write the stack main functions:

![2](https://user-images.githubusercontent.com/32440404/52536006-59527100-2d66-11e9-98c6-0f4aa6753178.jpg)

-Then we will create the sort function which have a two parameters of pointer of stack    (stack *A and stack *B).

![3](https://user-images.githubusercontent.com/32440404/52536025-9ae31c00-2d66-11e9-8711-d0654e2805e0.jpg)

-After initializing the two stacks inside the sort stack function, we create their sorting mechanism as the following picture:

![4](https://user-images.githubusercontent.com/32440404/52536041-bea66200-2d66-11e9-8e55-7610ec36fcf4.jpg)

In the picture above we create a “”for loop” that has a 15 iteration, inside it there is 
An “infinity loop”, inside it there are a three cases:

1- If the stack (A) was empty, then push the number into stack (A), then display the two stacks then break the “infinity loop”.

2- If the stack (A) was not empty and the entered number was lower than the stacktop of (A), then push the stacktop of (A) into stack (B) then pop stack (A), 

3- If the stack (A) was not empty and the entered number was not lower than the stacktop of (A), then display the two stacks and then break the infinity loop.

-After entering the 15 number the case number 4 will make sure that all the numbers of the stack (B) have been moved to stack (A)…

**User level:**

Here both of the two stacks are Empty and asking the user to enter the first number.

![11](https://user-images.githubusercontent.com/32440404/52536094-193fbe00-2d67-11e9-9e18-263e2375ddd4.jpg)

during the sorting process.

![12](https://user-images.githubusercontent.com/32440404/52536138-8eab8e80-2d67-11e9-94a6-952ae9e64d4f.jpg)


1-Second function which has (Hot Potato Game): 
-------------------------------------------------------------
**Analysis:**

-We want to simulate the circle Queue through hot potato game, with also taking into consideration the Queue Structure’s will be “Linked list based implantation”.

-In this game, children line up in a circle, music starts playing (10-25 sec will be taken randomly) and pass the potato from child to another after a random period (1-3 sec).

- At a certain point in the game (the music is stopped) the child who has the hot potato will be removed from the circle. Play continues until only one child is left.

-the children number must be (3>= or =<10).

**Design and programmer level:**

-First we will write the Queue main functions:

![13](https://user-images.githubusercontent.com/32440404/52536168-f6fa7000-2d67-11e9-8ce6-f6c2c04a4364.jpg)

Then we will create the HotPotatoGame function and initialize a Queue inside it:

- We initialized another queue to receive the lose players, then we make a 2D char array contains the name of our players.

-we will ask the user to enter the number of the player and if he entered an invalid number he will be asked till entering a valid number.

![14](https://user-images.githubusercontent.com/32440404/52536194-55275300-2d68-11e9-81c9-28f73092d298.jpg)


-After defining the number of the players, we will push their names into the Queue we created (q) then display their names on the screen.

-After displaying the names on the screen we make a random number which will be the running time for the game and it will change randomly every time

![15](https://user-images.githubusercontent.com/32440404/52536203-8011a700-2d68-11e9-96ef-7bc4a59cf13c.jpg)

Then, we create an infinity loop which have a three cases:

1-If the QueueSize(q) equals 1 then print the winner player and then break the loop

2-In the case number 2 we explain what is actually happening during the game where we Display the Queue (q) then we use the Waitfunction to wait for an while and add it to another variable (t) ,then push the first name in the Queue(q) at the end of it 

3-In this case if the variable (t) is equal or greater than the generated time (r_num), then pop the first name in the queue(q) and  push him into the other queue (e) which will be here the loser player then regenerate the (r_num) again  and make the variable (t) equal zero 


![16](https://user-images.githubusercontent.com/32440404/52536214-a899a100-2d68-11e9-9814-e2d8a2dc6d7b.jpg)
![17](https://user-images.githubusercontent.com/32440404/52536221-c535d900-2d68-11e9-861e-27882ec24a12.jpg)

**User level:**
  
Here we ask the user the number of the players. 

![22](https://user-images.githubusercontent.com/32440404/52536255-1e057180-2d69-11e9-86fe-db587ddc02d4.jpg)

Here a warning message come out if the user entered an invalid number, then asking him to enter another number.

![23](https://user-images.githubusercontent.com/32440404/52536257-2067cb80-2d69-11e9-89e0-ceb685a6da27.jpg)

Here when the user entered a valid number, printing the player’s names on the screen then ask the user if he want to change the number of the players or start playing:

![24](https://user-images.githubusercontent.com/32440404/52536258-22ca2580-2d69-11e9-96cf-247c2d1db5ee.jpg)

Here the Game GUI in the beginning: 

![25](https://user-images.githubusercontent.com/32440404/52536260-252c7f80-2d69-11e9-89eb-c58f94b3ce1a.jpg)

Here the game GUI , showing the time that the music is playing , the player who had the hot potato ,the last loser player and the  waiting time before passing to another player

![26](https://user-images.githubusercontent.com/32440404/52536262-278ed980-2d69-11e9-8cac-9cce1492944c.jpg)

Here showing the winner player and asking the user if he want play again or go back home page:

![27](https://user-images.githubusercontent.com/32440404/52536263-2a89ca00-2d69-11e9-9d20-34f10b1e1c1d.jpg)







