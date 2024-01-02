eng:
The branching principle I will talk about below is shown in the figure tree.png
Explanation 1):
Let an array be indexed from the first number.
There is an array, there is its first index, and its last index.
By the term "dividing", we mean splitting the indexes.
The idea is to divide the array first into two equal parts, then one of the halves is divided 
in half, and so on until we get a conditional "subarray" of one element.
That is, the path from the initial array to this element is a branch, and the algorithm
creates such a branch for each element.
There is one element at the end of each branch.
Then, it takes the first and second elements, sorts them, and creates a cell with two 
sorted values. Then the next two items, number 3 and number 4. 
are sorted and create a cell with two elements. At this point, we already have two cells 
with two sorted items each, and all the other items in the cells are one item each. 
That is, we are moving sequentially. So, now we're combining those two cells into a cell and
and sort them into a cell, where we end up with four sorted items. And so we're going to keep going until we've sorted 
we sort one half of the elements, in this case we have a total array of 8 elements, 
and only then we move on to the branch with the other half of the array elements. 
I.e. if there are 8 elements in the array, we split all the elements into single cells,
then we take 1 and 2 elements, sort them and overwrite them into the original array, 
creating a two-element cell, then we take 3 and 4 elements, sort them,
rewrite into the array, creating a conditional two-element cell. The next step would be 
is to combine these two cells, each containing two elements, combine them,
sort, and eventually we get 4 sorted first elements of the array. 
The first half of the array is sorted, let's proceed to the second half. We do the same thing. Now
we have two conditional subarrays of 4 sorted elements each, we merge them, while
sorting, and overwrite them into the original array. The result is a sorted 
array, according to the principle of recursive algorithm.

Explanation 2):
We divide the array until we get arrays with one element, since such an array is sorted a priori.
We divide, we get such array start indexes and middle indexes that they are equal,
then we can't split the array in half, and exit such a procedure; the next
call to the procedure will not be able to do the division either, and will return because the indices are such,
we have two arrays with one element each - we haven't done anything to the array, it's only
because of the indices.
Next, we sort the values from these two "arrays" and overwrite the starting array,
i.e. we have just reached the first two elements of the array and sorted them.
In the same way we will reach the next two array elements, i.e. at index 3 and 4, 
and sort them. And we will already have two sorted mini arrays. Now, what we need to do
combine these two mini arrays and sort them, and we do that, and we've got 
4 sorted elements. 
Since in this case we have only 8 elements, we have to repeat the same thing,
but with the other half of the numbers. We reach elements with indices 5 and 6, sort them,
reach elements 7 and 8, sort them, combine these two arrays,
sorting them, and we get 4 sorted elements on the left and 4 sorted elements on the left.
Then we sort these mini arrays with 4 sorted elements into a single array
of 8 elements. 
In doing this, we overwrote the original array each time, because we didn't lose anything, we just found two elements that were sorted.
just found two elements, sorted them, wrote them back into the original array,
then again, the next two numbers were taken, sorted, overwritten.

P.S. The implementation is in C, so if the array contains 8 elements, the numbering
starts from zero, and the first subarray will contain indices 0,1,2,3, and the second 4,5,6,7.


rus: Принцип ветвления, о котором я буду говорить ниже представлен на рисунке tree.png
Объяснение 1):
Пусть массив индексируется с первого номера.
Есть массив, есть его первый индекс, и последний.
Под понятием "делим", подразумевается разбиение индексов.
Суть такова, делим массив сначала на две равные части, потом одну из половин делим 
пополам, и так до тех пор пока не получим условный "подмассив" из одного элемента.
Т.е. путь от начального массива до этого элемента представляет собой ветку, и алгоритм
создает такую ветку для каждого элемента.
На конце каждой ветки по одному элементу.
Далее, берется первый и второй элементы, сортируются, и создают уже ячейку, с двумя 
отсортированными значениями. Потом следующие два элемента(3-ий номер и 4-ый) 
сортируются и создают ячейку из двух элементов. На данном этапе мы уже имеем две ячейки 
по два отсортированных элемента, а все остальные элементы в ячейчках по одном элементу. 
Т.е. мы двигаемся последовательно. Так вот, теперь те две ячейки мы объедияем в ячейку и
сортируем, где в итоге будет 4 отсортированных элемента. И так мы двигаемся, пока не 
отсортируем одну половину элементов, в данном случае у нас всего массива из 8 элементов, 
и только потом приступаем к ветке с другой половиной элементов массива. 
Т.е. если в массиве 8 элементов, мы разбиваем все элементы на одиночные ячейки,
потом берутся 1 и 2 элементы, сортируются и перезаписываются в изначальный массив, 
создавая при этом ячейку из двух элементов, далее берутся 3 и 4 элементы, сортируются,
перезаписываются в массив, создают условную ячейку из двух элементов. Следующим шагом будет 
объединение этих двух ячеек, каждая из которых содержит по 2 элемента, объединяем,
сортируем, в итоге получаем 4 отсортированных первых элемента массива. 
Первая половина массива отсортирована, приступаем ко второй. Делаем все тоже самое. Теперь
у нас есть два условных подмассива по 4 отсортированных элемента, мы их объединяем, при этом
сортируя, и перезаписываем в изначальный массив. В результате получаем отсортированный 
массив, по принципу алгоритма с рекурсией.
 

Объяснение 2):
Делим массив до тех пор, пока не получим массивы с одним элементом, т.к.
такой массив априори отсортирован.
Делим делим, получаем такие индексы начала массива и среднего индексы, что они равны,
тогда мы не можем разбить массив пополам, и выходим из такой процедуры; следующий
вызов процедуры тоже не сможет осуществить деление, и вернется, т.к. индексы таковы,
что у нас два массива по одному элементу - с массивом мы ничего не делали, это всего
лишь благодаря индексам.
Далее, мы сортируем значения из этих двух "массивов" и перезаписываем стартовый массив,
т.е. мы достигли только что первых двух элементов массива и отсортировали их.
Таким же образом мы достигнем следующие два элемента массива, т.е. под индексом 3 и 4, 
отсортируем их. И мы уже будем иметь два отсортированных мини массива. Теперь, нужно
эти два мини массива тоже объединить и отсортировать; делаем это, и получаем уже 
4 отсортированных элемента. 
Т.к. в данном случае у нас всего 8 элементов, то мы должны повторить все тоже самое,
только со второй половиной чисел. Достигаем элементов с индексами 5 и 6, сортируем их,
достигаем элементов с индексами 7 и 8, сортируем их, объединяем эти два массива,
сортируя их, и получаем 4 отсортированных элемента слева и 4 отсортированных слева.
Далее сортируем эти мини массивы с 4-мя отсортированными элементам в один массив
из 8 элементов. 
При этом, мы каждый раз перезаписывали исходный массив, т.к. мы ничего не теряли, мы
всего лишь находили два элемента, сортировали их, записывали обратно в исходный массив,
потом снова, следующие два числа взяли, отсортировали, перезаписывали

P.S. реализация на языке С, поэтому если массив содержит 8 элементов, то нумерация
начинается с нуля, и первый подмассив будет содержать индексы 0,1,2,3, а второй 4,5,6,7.