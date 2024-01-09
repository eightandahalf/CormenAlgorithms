Максимальный подмассив для j+1 элементов a[0..j+1] будет подмассив a[i..j+1], где 0 <= i <= j+1

допустим, 1 2 3 4 5 6 7 - индексы массива
максимальная сумма подмассива a[1..2] равна либо максимальному подмассиву из одного элемента a[2], либо подмассиву 
a[i..2], где i - больше либо равно одному, есть вероятность, что i будет равно просто 2, тогда останется
только второй элемент массива, как максимальный подмассив для массива a[1..2], но, возможно, максимальная сумма
будет достигаться при сложении первого и второго элемента, тогда максимальный подмассив будет состоять из двух
элементов a[1..2].
Если нужно найти максимальный подмассив для 7 элементов, то этот подмассив будет равен либо максимальному 
подмассиву из одного элемента под номером 7, либо одному из подмассивов a[i..7], где i изменяется от 1 до 7
ДЛЯ МАССИВА ВЫШЕ С ИНДЕКСАМИ ОТ 1 ДО 7 НУЖНО РАСМОТРЕТЬ 7 ПОДМАССИВОВ
a[1..7], a[2..7], a[3..7], ..., a[7..7]:
для каждого такого подмассива нужно посчитать сумму и сравнить с максимальной.

Пример работы программы:
start array: -23 83 -2 4 60 -44 -79 -22 38 8 

start_index = 0, end_index = 0
while loop start:
        subarray_start_index = 0
        subarray_end_index = 0
        for indexes: 0, subarray_sum = -23


start_index = 1, end_index = 0
while loop start:
        subarray_start_index = 1
        subarray_end_index = 1
        for indexes: 1, subarray_sum = 83


        subarray_start_index = 0
        subarray_end_index = 1
        for indexes: 0, 1, subarray_sum = 60


start_index = 2, end_index = 0
while loop start:
        subarray_start_index = 2
        subarray_end_index = 2
        for indexes: 2, subarray_sum = -2


        subarray_start_index = 1
        subarray_end_index = 2
        for indexes: 1, 2, subarray_sum = 81


        subarray_start_index = 0
        subarray_end_index = 2
        for indexes: 0, 1, 2, subarray_sum = 58


start_index = 3, end_index = 0
while loop start:
        subarray_start_index = 3
        subarray_end_index = 3
        for indexes: 3, subarray_sum = 4


        subarray_start_index = 2
        subarray_end_index = 3
        for indexes: 2, 3, subarray_sum = 2


        subarray_start_index = 1
        subarray_end_index = 3
        for indexes: 1, 2, 3, subarray_sum = 85


        subarray_start_index = 0
        subarray_end_index = 3
        for indexes: 0, 1, 2, 3, subarray_sum = 62


start_index = 4, end_index = 0
while loop start:
        subarray_start_index = 4
        subarray_end_index = 4
        for indexes: 4, subarray_sum = 60


        subarray_start_index = 3
        subarray_end_index = 4
        for indexes: 3, 4, subarray_sum = 64


        subarray_start_index = 2
        subarray_end_index = 4
        for indexes: 2, 3, 4, subarray_sum = 62


        subarray_start_index = 1
        subarray_end_index = 4
        for indexes: 1, 2, 3, 4, subarray_sum = 145


        subarray_start_index = 0
        subarray_end_index = 4
        for indexes: 0, 1, 2, 3, 4, subarray_sum = 122


start_index = 5, end_index = 0
while loop start:
        subarray_start_index = 5
        subarray_end_index = 5
        for indexes: 5, subarray_sum = -44


        subarray_start_index = 4
        subarray_end_index = 5
        for indexes: 4, 5, subarray_sum = 16


        subarray_start_index = 3
        subarray_end_index = 5
        for indexes: 3, 4, 5, subarray_sum = 20


        subarray_start_index = 2
        subarray_end_index = 5
        for indexes: 2, 3, 4, 5, subarray_sum = 18


        subarray_start_index = 1
        subarray_end_index = 5
        for indexes: 1, 2, 3, 4, 5, subarray_sum = 101


        subarray_start_index = 0
        subarray_end_index = 5
        for indexes: 0, 1, 2, 3, 4, 5, subarray_sum = 78


start_index = 6, end_index = 0
while loop start:
        subarray_start_index = 6
        subarray_end_index = 6
        for indexes: 6, subarray_sum = -79


        subarray_start_index = 5
        subarray_end_index = 6
        for indexes: 5, 6, subarray_sum = -123


        subarray_start_index = 4
        subarray_end_index = 6
        for indexes: 4, 5, 6, subarray_sum = -63


        subarray_start_index = 3
        subarray_end_index = 6
        for indexes: 3, 4, 5, 6, subarray_sum = -59


        subarray_start_index = 2
        subarray_end_index = 6
        for indexes: 2, 3, 4, 5, 6, subarray_sum = -61


        subarray_start_index = 1
        subarray_end_index = 6
        for indexes: 1, 2, 3, 4, 5, 6, subarray_sum = 22


        subarray_start_index = 0
        subarray_end_index = 6
        for indexes: 0, 1, 2, 3, 4, 5, 6, subarray_sum = -1


start_index = 7, end_index = 0
while loop start:
        subarray_start_index = 7
        subarray_end_index = 7
        for indexes: 7, subarray_sum = -22


        subarray_start_index = 6
        subarray_end_index = 7
        for indexes: 6, 7, subarray_sum = -101


        subarray_start_index = 5
        subarray_end_index = 7
        for indexes: 5, 6, 7, subarray_sum = -145


        subarray_start_index = 4
        subarray_end_index = 7
        for indexes: 4, 5, 6, 7, subarray_sum = -85


        subarray_start_index = 3
        subarray_end_index = 7
        for indexes: 3, 4, 5, 6, 7, subarray_sum = -81


        subarray_start_index = 2
        subarray_end_index = 7
        for indexes: 2, 3, 4, 5, 6, 7, subarray_sum = -83


        subarray_start_index = 1
        subarray_end_index = 7
        for indexes: 1, 2, 3, 4, 5, 6, 7, subarray_sum = 0


        subarray_start_index = 0
        subarray_end_index = 7
        for indexes: 0, 1, 2, 3, 4, 5, 6, 7, subarray_sum = -23


start_index = 8, end_index = 0
while loop start:
        subarray_start_index = 8
        subarray_end_index = 8
        for indexes: 8, subarray_sum = 38


        subarray_start_index = 7
        subarray_end_index = 8
        for indexes: 7, 8, subarray_sum = 16


        subarray_start_index = 6
        subarray_end_index = 8
        for indexes: 6, 7, 8, subarray_sum = -63


        subarray_start_index = 5
        subarray_end_index = 8
        for indexes: 5, 6, 7, 8, subarray_sum = -107


        subarray_start_index = 4
        subarray_end_index = 8
        for indexes: 4, 5, 6, 7, 8, subarray_sum = -47


        subarray_start_index = 3
        subarray_end_index = 8
        for indexes: 3, 4, 5, 6, 7, 8, subarray_sum = -43


        subarray_start_index = 2
        subarray_end_index = 8
        for indexes: 2, 3, 4, 5, 6, 7, 8, subarray_sum = -45


        subarray_start_index = 1
        subarray_end_index = 8
        for indexes: 1, 2, 3, 4, 5, 6, 7, 8, subarray_sum = 38


        subarray_start_index = 0
        subarray_end_index = 8
        for indexes: 0, 1, 2, 3, 4, 5, 6, 7, 8, subarray_sum = 15


start_index = 9, end_index = 0
while loop start:
        subarray_start_index = 9
        subarray_end_index = 9
        for indexes: 9, subarray_sum = 8


        subarray_start_index = 8
        subarray_end_index = 9
        for indexes: 8, 9, subarray_sum = 46


        subarray_start_index = 7
        subarray_end_index = 9
        for indexes: 7, 8, 9, subarray_sum = 24


        subarray_start_index = 6
        subarray_end_index = 9
        for indexes: 6, 7, 8, 9, subarray_sum = -55


        subarray_start_index = 5
        subarray_end_index = 9
        for indexes: 5, 6, 7, 8, 9, subarray_sum = -99


        subarray_start_index = 4
        subarray_end_index = 9
        for indexes: 4, 5, 6, 7, 8, 9, subarray_sum = -39


        subarray_start_index = 3
        subarray_end_index = 9
        for indexes: 3, 4, 5, 6, 7, 8, 9, subarray_sum = -35


        subarray_start_index = 2
        subarray_end_index = 9
        for indexes: 2, 3, 4, 5, 6, 7, 8, 9, subarray_sum = -37


        subarray_start_index = 1
        subarray_end_index = 9
        for indexes: 1, 2, 3, 4, 5, 6, 7, 8, 9, subarray_sum = 46


        subarray_start_index = 0
        subarray_end_index = 9
        for indexes: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, subarray_sum = 23



High index of array equal to 4
Low index of array equal to 1
Sum of maxsum subarray equal to 145


Суть программы в том, чтобы имея в любой момент времени массив любой длины, найти для него подмассив, который будет давать максимальную
сумму. В начальный момент времени, у нас подмассив из одного элемента, поэтому сумма подмассива будет равняться значению первого элемента, 
и этот же элемент сразу запишется в максимальную сумму maxsum, то есть, для массив start array: -23 83 -2 4 60 -44 -79 -22 38 8 

start_index = 0, end_index = 0
while loop start:
        subarray_start_index = 0
        subarray_end_index = 0
        for indexes: 0, subarray_sum = -23

дальше, мы расширяем исследуемый подмассив до двух значений
start_index = 1, end_index = 0
while loop start:
        subarray_start_index = 1
        subarray_end_index = 1
        for indexes: 1, subarray_sum = 83


        subarray_start_index = 0
        subarray_end_index = 1
        for indexes: 0, 1, subarray_sum = 60

где, мы можем заметить, сначала вычисляется значение только одной новой ячейки(получаем 83, что становится временной максимальной
суммой), если складываем значения первой и второй ячейки то получаем 60(меньше 83, поэтому эта сумма не записывается в переменную,
содержащую максимальную сумму подмассива), и так далее, если в распоряжении три элемента, то смотрим значение в новой ячейки, т.е. 
под номером 2, далее складываем значения второй и первой ячеек, получаем значение 81, далее складываем значения всех первых трех ячеек 
и в сумме получаем 58(что опять же не превышает значение текущей макс суммы, равной 83):
start_index = 2, end_index = 0
while loop start:
        subarray_start_index = 2
        subarray_end_index = 2
        for indexes: 2, subarray_sum = -2


        subarray_start_index = 1
        subarray_end_index = 2
        for indexes: 1, 2, subarray_sum = 81


        subarray_start_index = 0
        subarray_end_index = 2
        for indexes: 0, 1, 2, subarray_sum = 58

и так далее, пока не рассмотрим весь массив, при этом, в начальный момент времени, переменная которая должна содержать максимальную сумму
подмассива, который нужно найти, содержит максимально отрицательное число INT_MIN = -2147483648, т.к. всегда есть вероятность, что
в исследуемом массиве вообще не будет положительных чисел, но найти хотя бы минимально отрицательное число нужно.
