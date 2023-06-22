/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 23:07:56 by yena              #+#    #+#             */
/*   Updated: 2023/06/22 13:31:37 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "font.hpp"
#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

/**
 * @brief Basic test
 * @details This test is for checking basic constructor, destructor
 */
void basicTest(void) {
  std::cout << F_GREEN << "Basic Test" << FB_DEFAULT << std::endl;
  std::cout << "===================== Constructor =====================" << std::endl;
  // Abstract class can't be instantiated
//  const AAnimal *j = new Dog();
//  const AAnimal *i = new Cat();
  std::cout << std::endl;
  std::cout << "===================== Destructor ======================" << std::endl;
//  delete j;
//  delete i;
  std::cout << std::endl;
}

/**
 * @brief Create farm
 * @details This function creates farm
 * @param AAnimal **farm
 */
void createFarm(AAnimal **farm) {
  std::cout << F_GREEN << "Create Test" << FB_DEFAULT << std::endl;
  std::cout << "===================== Constructor =====================" << std::endl;
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
}

/**
 * @brief Make sound and Brain test
 * @param AAnimal *farm[10]
 */
void functionTest(AAnimal *farm[10]) {
  std::cout << F_GREEN << "MakeSound & Brain Test" << FB_DEFAULT << std::endl;
  std::cout << "====================== MakeSound ======================" << std::endl;
  for (int i = 0; i < 10; i++) {
    farm[i]->makeSound();
  }
  std::cout << "======================== Brain ========================" << std::endl;
  Cat *cat = static_cast<Cat *>(farm[0]);
  Dog *dog = static_cast<Dog *>(farm[5]);
  std::cout << "A Cat's idea: " << cat->getIdea(0) << std::endl;
  std::cout << "A Dog's idea: " << dog->getIdea(5) << std::endl;
  std::cout << std::endl;
  std::cout << "A Cat and A Dog changed it's idea!\n" << std::endl;
  cat->setIdea(0, "I need to sleep...");
  dog->setIdea(5, "Let's go for a walk!!!");
  std::cout << "A Cat's idea: " << cat->getIdea(0) << std::endl;
  std::cout << "A Dog's idea: " << dog->getIdea(5) << std::endl;
  std::cout << std::endl;
}

/**
 * @brief Destroy farm
 * @details This function destroys farm
 * @param farm
 */

void destroyFarm(AAnimal *farm[10]) {
  std::cout << F_GREEN << "End of Test" << FB_DEFAULT << std::endl;
  std::cout << "===================== Destructor ======================" << std::endl;
  for (int i = 0; i < 10; i++) {
    delete farm[i];
  }
  std::cout << std::endl;
}

int main(void) {
  basicTest();
  AAnimal *(farm[10]);
  createFarm(farm);
  functionTest(farm);
  destroyFarm(farm);
  return (0);
}