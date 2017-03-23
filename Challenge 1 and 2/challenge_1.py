import fileinput

import sys

POKEDEX = "pokemons_list.csv"


if __name__ == "__main__":
    pokedex = None
    list_of_name = {}
    pokedex = open(POKEDEX, "r")
    next(pokedex)
    scrambled_name_of_pokemon = sys.argv[1].lower()
    ascii_sum_of_scrambled = sum(ord(letter) for letter in scrambled_name_of_pokemon)

    for line in pokedex:
        a = line.split("|")
        ascii_sum = sum(ord(letters) for letters in a[1].lower())
        if not list_of_name.get(ascii_sum, False):
            list_of_name[ascii_sum] = [a[1]]
        else:
            list_of_name[ascii_sum].append(a[1])
    print(list_of_name)

    temp_scrambled_name = scrambled_name_of_pokemon
    possible_name = list_of_name[ascii_sum_of_scrambled].copy()
    for pokemon in list_of_name[ascii_sum_of_scrambled]:
        print(possible_name)

        print(pokemon)
        for letter in pokemon:
            print(letter)
            result = temp_scrambled_name.find(letter.lower())
            if result != -1:
                temp_scrambled_name = temp_scrambled_name[:result] + temp_scrambled_name[result + 1:]
            else:
                possible_name.remove(pokemon)
                break
        temp_scrambled_name = scrambled_name_of_pokemon





    if possible_name:
        print(possible_name)
    else:
        print("Pokemon not found!")
