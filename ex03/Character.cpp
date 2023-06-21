/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 20:11:04 by yena              #+#    #+#             */
/*   Updated: 2023/06/21 21:19:13 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 20:11:04 by yena              #+#    #+#             */
/*   Updated: 2023/06/21 21:18:00 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) {
  std::cout << F_YELLOW << "[ Character ] " << FB_DEFAULT
            << "Character Constructor called" << std::endl;
}

Character::Character(const Character &other) {
  std::cout << F_YELLOW << "[ Character ] " << FB_DEFAULT
            << "Character Copy Constructor called" << std::endl;
  if (this != &other)
    *this = other;
}

Character &Character::operator=(const Character &other) {
  std::cout << F_YELLOW << "[ Character ] " << FB_DEFAULT
            << "Character Assignation Operator called" << std::endl;
  return (*this);
}

Character::~Character(void) {
  std::cout << F_YELLOW << "[ Character ] " << FB_DEFAULT
            << "Character Destructor called" << std::endl;
}

/**
 * @brief Get name of Character
 * @return std::string
 */
std::string const &Character::getName(void) const {
  std::cout << F_YELLOW << "[ Character ] " << FB_DEFAULT
            << "Character getName called" << std::endl;
  return (this->_name);
}

/**
 * @brief Equip materia
 * @param materia
 */
void Character::equip(AMateria *materia) {
  std::cout << F_YELLOW << "[ Character ] " << FB_DEFAULT
            << "Character equip called" << std::endl;
  for (int i = 0; i < SLOT_MAX; i++) {
    if (this->_materia[i] == NULL) {
      this->_materia[i] = materia;
      return ;
    }
  }
  std::cout << F_RED << "[ Character ] " << FB_DEFAULT
            << "Your inventory is full!" << std::endl;
}

/**
 * @brief Unequip materia
 * @param idx
 */
void Character::unequip(int idx) {
  if (this->_mataria[idx] == NULL) {
    std::cout << F_RED << "[ Character ] " << FB_DEFAULT
              << "The inventory slot is empty!" << std::endl;
    return ;
  }
  std::cout << F_YELLOW << "[ Character ] " << FB_DEFAULT
            << "Character unequip called" << std::endl;
  this->_materia[idx] = NULL;
}

/**
 * @brief Use materia
 * @param idx
 * @param target
 */
void Character::use(int idx, Character &target) {
  if (this->_mataria[idx] == NULL) {
    std::cout << F_RED << "[ Character ] " << FB_DEFAULT
              << "You can not use nothing!" << std::endl;
    return ;
  }
  std::cout << F_YELLOW << "[ Character ] " << FB_DEFAULT
            << "Character use called" << std::endl;
  this->_materia[idx]->use(target);
}