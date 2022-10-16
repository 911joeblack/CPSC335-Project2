def citySearch(concat_string, cities):
    index_list = []
    words_found_list = []

    i = 0

    while (i < len(concat_string[0])):
        for city in cities:
            if concat_string[0][i] == city[0]:
                index_list.append(i)
                words_found_list.append(city)
                
                j = 0
                
                while (j < len(city)-1):
                    if concat_string[0][i] == city[j]:
                        i += 1
                        j += 1
                        continue
                    
                    else:
                        i = index_list.pop(-1)
                        words_found_list.pop(-1)
                        break
                    
        i += 1
        
    return index_list, words_found_list

a1 = ['sanoaklandrialtofullertonmarcolongbreacoronamodestoclovissimithousand']
b1 = ['brea', 'modesto', 'clovis', 'corona']

a2 = ['marcopolmonafremontrialtofullertonmarcolongfresnochinoclovissimisalinas']
b2 = ['fullerton', 'chino', 'fremont', 'fresno']

a3 = ['torranceoaklandrialtomarcooxnardchinofresnoirvineclovissimiorange']
b3 = ['oxnard', 'irvine', 'orange', 'marco']

def main():
    print(citySearch(a1, b1))
    print(citySearch(a2, b2))
    print(citySearch(a3, b3))

if __name__ == "__main__":
    main()
