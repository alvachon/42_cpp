/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:07:53 by alvachon          #+#    #+#             */
/*   Updated: 2023/08/04 11:34:15 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
#include "WrongAnimal.h"
#include "WrongCat.h"
#include "Brain.h"

int main(void)
{
    // {
    //    const Animal* meta = new Animal();
    //    const Animal* j = new Dog();
    //    const Animal* i = new Cat();
   
    //    std::cout << j->getType() << " " << std::endl;
    //    std::cout << i->getType() << " " << std::endl;
    //    i->makeSound();
    //    j->makeSound();
    //    meta->makeSound();
   
    //    delete meta;
    //    delete j;
    //    delete i;
    //    std::cout << "\n";
    // }
    // {
    //    const WrongAnimal* meta = new WrongAnimal();
    //    const WrongAnimal* j = new WrongCat();
   
    //    std::cout << meta->getType() << " " << std::endl;
    //    std::cout << j->getType() << " " << std::endl;
    //    meta->makeSound();
    //    j->makeSound();
   
    //    delete meta;
    //    delete j;
    //    std::cout << "\n";
    // }
    // {
    //     Animal Mother;
    //     std::cout << Mother.getType() << " " << std::endl;
    //     Animal Baby(Mother);
    //     std::cout << Baby.getType() << " " << std::endl;
    // }
    // {
    //     std::cout << "\n";
    //     Dog mamaDog;
    //     Dog babyDog(mamaDog);
    //     std::cout << mamaDog.getType() << " mama" << std::endl;
    //     mamaDog.makeSound();
    //     std::cout << babyDog.getType() << " baby" << std::endl;
    //     babyDog.makeSound();
    // }
    {
        const Animal *zoo[20];

        for (int i = 0; i < 18; i += 2)
        {
            zoo[i] = new Dog();
            zoo[i + 1] = new Cat();
        }
        for (int i = 0; i < 19; i ++)
            delete zoo[i];
    }
    return (0);
}   