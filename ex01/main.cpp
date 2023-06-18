/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 23:07:56 by yena              #+#    #+#             */
/*   Updated: 2023/06/19 00:56:46 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

/**
 * @brief Basic test
 * @details This test is for checking basic constructor, destructor
 */
void basicTest(void) {
  std::cout << "\033[0;32m1. Basic Test\033[0m" << std::endl;
  std::cout << "===================== Constructor =====================" << std::endl;
  const Animal *j = new Dog();
  const Animal *i = new Cat();
  std::cout << std::endl;
  std::cout << "===================== Destructor ======================" << std::endl;
  delete j;
  delete i;
  std::cout << std::endl;
}

/**
 * @brief Create farm
 * @details This function creates farm
 * @return Animal** farm
 */
Animal **createFarm(void) {
  std::cout << "===================== Constructor =====================" << std::endl;
  Animal **farm = new Animal*[10];
  for (int i = 0; i < 5; i++) {
    farm[i] = new Cat();
    Cat *cat = static_cast<Cat *>(farm[i]);
    cat->setIdea(i, "I want a fish!");
  }
  for (int i = 5; i < 10; i++) {
    farm[i] = new Dog();
    Dog *dog = static_cast<Dog *>(farm[i]);
    dog->setIdea(i, "I want a bone!");
  }
  std::cout << std::endl;
  return (farm);
}

/**
 * @brief Make sound test
 * @details This function makes sound of farm
 * @param farm
 */
void makeSoundTest(Animal *farm[10]) {
  std::cout << "====================== MakeSound ======================" << std::endl;
  for (int i = 0; i < 10; i++) {
    farm[i]->makeSound();
  }
  std::cout << std::endl;
}

/**
 * @brief Destroy farm
 * @details This function destroys farm
 * @param farm
 */

void destroyFarm(Animal *farm[10]) {
  std::cout << "===================== Destructor ======================" << std::endl;
  for (int i = 0; i < 10; i++) {
    delete farm[i];
  }
  std::cout << std::endl;
}

int main(void) {
  basicTest();
  Animal **farm = createFarm();
  makeSoundTest(farm);
  destroyFarm(farm);
  return (0);
}