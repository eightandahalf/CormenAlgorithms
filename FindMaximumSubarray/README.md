ENG: The task of the find_max_subarray function is to find a subarray (one number or more), which will contain
values that will sum up to give the maximum possible sum.
That is, if we have an array,  
int array[10] = {3, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100},
then the function will extract the subarray equal to the zero element, i.e. the value 3, because
it is this value that represents the largest value from the whole array.
But let's suppose we have such an array:
int array[10] = {3, 3, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100},
then the function would eliminate the first two elements, because they sum up to 6, which is
is greater than all other array values, even in sum(-100 +(-100) +(-100) +(-100).... = x = << 6).
This situation can also happen:
int array[10] = {3, 3, -100, 1000, -100, -100, -100, -100, -100, -100, -100, -100, -100},
in this case, the function will cure a subarray of one element numbered 3 (numbering from zero),
because we can basically say that we have the first two positive elements,
but then we'd have to take the number 2 element with a value of -100,
which is much smaller than 6, so we take into the subarray a value that will allow the subarray
to contain the maximum possible value from the entire array.
If the situation were like this,
int array[10] = {-100, 3, 3, 1000, -100, -100, -100, -100, -100, -100, -100, -100, -100},
then, of course, the subarray would consist of elements 1, 2 and 3 (numbering from zero), since it is the
these values will allow the subarray to contain the maximum possible value\sum of the values of the 
of the subarray values from the entire array.
In this situation,
int array[10] = {100, -50, 1000, -100, -100, -100, -100, -100, -100, -100, -100},
the function will extract the first three elements, because 100 compensates for the negative value of -50.
and tosses it into the total subarray, which the function will return the value 50.

In this situation,
int array[10] = {-100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100},
the function will retrieve the first element because even though it is negative, it gives the
the largest negative value from the whole array, because if we summarize some elements, the sum will be less than the negative value. 
some elements, this sum will be less than -100.

The lhs structure contains three components that define the minimum and maximum indices of the
of the subarray, as well as the sum of elements between these indices (including them).

To solve the problem of finding the maximum subarray, we need to solve three subproblems,
and choose the most optimal one.
The first and second problems involve partitioning the array into small parts (subarrays), and 
finding the optimal one: the first problem always considers the left subarray, the second one - the right subarray. 
task considers the right subarray. 
At the same time, there is a third task that allows you to find a subarray that intersects the middle point, i.e. the place where the subarray is located.
mid point, i.e. the place that divides the array into two parts each time, and creates the same left and right subarray. 
the left and right subarrays.
And in the end, we have three solutions each time, we need to choose and keep the optimal one.

In this case, this function, find_max_subarray, works on the principle of recursion, which allows,
having at the initial moment a large array, to reach its first elements, and thus, going to the end, to compare, to choose the optimal one.
to the end, comparing, selecting the optimal values, and finally determining only those that
will give the maximum sum.


Let's consider the principle of the function find_max_crossing_subarray:
create a variable sum = 0, which will contain the value of the maximum sum of the subarray.
then, from the middle to the beginning, we start stepping, while adding to the variable sum, 
the value of the current cell in the array.
If the value of sum > the max sum of the subarray, which at the initial moment of time is a
a very large negative number, then leftsum equals sum, and don't forget to update index
MaxLeftIndex, which points to the index of the array element that gave a boost to the value of sum, 
so that it exceeds the value of leftsum.
At the same time, each time we update leftsum - we do not add some value to it, but we 
we specifically write some value to it.

The task of find_max_crossing_subarray is to find subarrays with the maximum sum.
Even, even if this sum is negative, we still have to find it.
Example:
there is an array -23 83 -2 4 60 -44 -79 -22 38 8 (indexing from zero to nine).
The left side is easy. But if we look at the left -44 -79 -22 38 8,
you might wonder why we can't just skip over finding 
of the maximum sum if it's negative, which is what it is:
-44 + (-79) = -123, then we add -22 to this number and get -145, then we
add 38 and 8 and you get -99. And we can see that all the sums were less than zero, 
but that's the trick of this function, it has to find the subarrays with the largest sums possible. 
sums, even if that sum is negative, but it has to be the largest sum in the subarray.
subarray, so in our case, the subarray of the first element -44 gives the subarray with the largest sum, although it is negative. 
the largest sum, even if it's negative.


RUS:
Задача функции find_max_subarray найти подмассив(одно число и более), который будет содержать
значения, которые в сумме будут давать максимально возможную сумму.
То есть, если у нас есть массив,  
int array[10] = {3, -100, -100, -100, -100, -100, -100, -100, -100, -100},
то функция извлечет из него подмассив равный нулевому элементу, то есть значению 3, т.к.
именно оно представляет собой наибольшее значение со всего массива.
Но, допустим у нас был бы такой массив:
int array[10] = {3, 3, -100, -100, -100, -100, -100, -100, -100, -100},
тогда бы функция излекла первый два элемента, т.к. они в сумме дают значение 6, которое
больше всех остальных значений массив, даже в сумме(-100 +(-100) +(-100).. = x = << 6).
Может случиться и такая ситуация:
int array[10] = {3, 3, -100, 1000, -100, -100, -100, -100, -100, -100},
в таком случае функция излечет подмассив из одного элемента под номером 3(нумерация с нуля),
так как мы, в принципе, можем сказать, что у нас же есть первые два положительных элемента,
но тогда нам нужно будет забрать с собой в подмассив и элемент под номером 2 со значением -100,
который гораздо меньше 6, поэтому мы берем в подмассив значение, которое позволит подмассиву
содержать максимально возможное значение из всего массива.
Если бы ситуация была такой,
int array[10] = {-100, 3, 3, 1000, -100, -100, -100, -100, -100, -100},
то, безусловно, подмассив состоял бы из элементов 1, 2 и 3(нумерация с нуля), так как именно
эти значение позволят помассиву содержать максимально возможное значение\сумму значений 
подмассива из всего массива.
В такой ситуации,
int array[10] = {100, -50, 1000, -100, -100, -100, -100, -100, -100, -100},
функция извлечет первые три элементы, т.к. 100 компенсирует отрицательно значение -50
и докидывает в общий подмассив, который вернет функция значение 50.

В такой ситуации,
int array[10] = {-100, -100, -100, -100, -100, -100, -100, -100, -100, -100},
функция извлечет первый элемент, т.к. несмотря на то, что он отрицательный, он дает
наибольшее отрицательное значение со всего массива, т.к. если мы будет суммировать 
какие-то элементы, то такая сумма будет меньше -100.

Структура lhs содержит три компонента, которые определяют минимальный и максимальный индексы
подмассива, а также сумму элементов между этими индексами(включая их).

Чтобы решить задачу нахождения максимального подмассива, нужно решить три подзадачи,
и выбрать самую оптимальную.
Первая и вторая задачи подразумевают разбиение массива на мелки части(подмассива), и 
нахождение оптимального: первая задача рассматривает всегда левый подмассив, вторая 
задача - правый подмассив. 
При этом есть третья задача, которая позволяет находить подмассив, который пересекает
mid point, т.е. место, которое разделяет каждый раз массив на две части, и создает тот 
самый левый и правый подмассива.
И в итоге, каждый раз у нас есть три решения, нужно выбрать и оставить оптимальное.

При этом данная функция, find_max_subarray, работает по принципу рекурсии, что позволяет,
имея в начальный момент, большое массив, достичь его первых элементов, и таким образом, идя
до конца, сравнивать, выбирать оптимальные значения, и в итоге определить только те, которые
будут давать максимальную сумму.


Рассмотрим принцип работы функции find_max_crossing_subarray:
создаем переменную sum = 0, которая будет содержать значение максимальной суммы подмассива.
потом, с середины до начала начинаем шагать, при этом прибавляя к переменной sum, 
значение текущей ячейки массива.
Если значение sum > макс суммы подмассива(leftsum), которая в начальный момент времени равна
очень большому отрицательному числу, то leftsum равняется sum, и не забываем обновить индекс
MaxLeftIndex, который указывает на индекс элемента массива, который дал буст значению sum, 
чтобы оно превысило значение leftsum.
При этом, каждый раз, когда мы обновляем leftsum - мы не прибавляем к нему какое-то значение, а 
конкретно записываем какое-то значение.

Задача find_max_crossing_subarray найти подмассивы с максимальной суммой.
Даже, даже, если эта сумма отрицательная, то мы все равно должны ее найти.
Пример:
есть массив -23 83 -2 4 60 -44 -79 -22 38 8 (индексация с нуля и до девяти).
с левой частью несложно. но вот если взглянуть на левую -44 -79 -22 38 8,
то может возникнуть вопрос, а почему мы вообще не можем скипнуть нахождение 
маскимальной суммы, если она будет отрицательной, т.е. вот что будет:
-44 + (-79) = -123, потом к этому числу прибавляем -22 и получается -145, потом
прибавляем 38 и 8, получаем -99. и, мы можем видеть, что все суммы были меньше нуля, 
но, в этом и фишка этой функции, она должна найти подмассивы с максимально большими 
суммами, даже если эта сумма отрицательная, но она должна быть наибольшее среди всего
подмассива, поэтому в нашем случае, подмассив из первого элемента -44 дает подмассив с 
наибольшей суммой, хоть и отрицательной.
