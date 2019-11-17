> Choosing
* We generally iterate over decisions. What are we iterating over here? What are the
choices for each decision? Do we need a for loop?
> Exploring
* How can we represent that choice? How should we modify the parameters and store
our previous choices (avoiding arms-length recursion)?
a) Do we need to use a wrapper due to extra parameters?
* How should we restrict our choices to be valid?
* How should we use the return value of the recursive calls? Are we looking for all
solutions or just one?
> Un-choosing
* How do we un-modify the parameters from step 3? Do we need to explicitly un-modify,
or are they copied? Are they un-modified at the same level as they were modified?
Base Case
* What should we do in the base case when we're out of decisions (usually return true)?
* Is there a case for when there aren't any valid choices left or a "bad" state is reached
(usually return false)?
8. Are the base cases ordered properly? Are we avoiding arms-length recursion?