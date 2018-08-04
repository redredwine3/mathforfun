
Interesting things to note:

3,6,9,12,15,18,21,...
5,10,15,20,25,30,35,...

also include 4 for an example:
4,8,12,16,20,24,28,...

As long as the numbers are not multiples of each other then:
Any two numbers will share multiples in a pattern by realizing that the smaller multiple will repeat the same number every (big_num) times. 

So multiples of 3, will repeat numbers contained in multiples of 5, every 5th number. 

Also you can simple check that if a particular multiple is factorable by 3 and 5, then it is basically gonna get repeated. 

1)
The simplest solution to this simply create two lists of multiples of 3 and 5, then perform an intersection of both lists so certain multiples don't get double counted.    
 
2)
Another would be to use the current iteration to compute the cooresponding multiple value for the 3-list using the 5-list. They are related by 3-list = 5-list -(current iteration*2). So if the iteration is one 1, then its 5 and 3 are generated. Then we would just need to account for the double counts. So every fifth iteration we do not compute. How could we extend this idea however? Well as long as the current computed number from the bigger list isn't factored by both numbers than we add both, otherwise only add the bigger number.

3)
Lastly you could generate three lists, M(3), M(5), and then M(15). Combine M(3), and M(5) and subtract by M(15) to remove any double counts. 

4)Best Solution is the following:

Take the fact that a sum is defined by Sn=n(a1+an)/2:

Then we can easily compute that for a term 999, we could simply do 999/3= 333 terms. Then do Sn= 333(999+3)/2









