def main():
    numbers = [3,25,7]
    numb = [17,10,23]
    numbers += numb
    numbers.sort()
    print(numbers)
    remove_multiples(numbers, 5) 
    print("Numbers left", numbers) 

def remove_multiples(number_list, multiples_of):
    for i in number_list:
        if i % multiples_of == 0:
            number_list.remove(i)
    return number_list

main()
