/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 20:09:32 by yena              #+#    #+#             */
/*   Updated: 2023/06/21 20:53:51 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : {
  std::cout << F_MAGENTA << "[ Cure ] " << FB_DEFAULT
            << "Cure Constructor called" << std::endl;
  this->_type = "cure";
}

Cure::Cure(const Cure &other) {
  std::cout << F_MAGENTA << "[ Cure ] " << FB_DEFAULT
            << "Cure Copy Constructor called" << std::endl;
  if (this != &other)
    *this = other;
}

Cure &Cure::operator=(const Cure &other) {
  std::cout << F_MAGENTA << "[ Cure ] " << FB_DEFAULT
            << "Cure Assignation Operator called" << std::endl;
  return (*this);
}

Cure::~Cure(void) {
  std::cout << F_MAGENTA << "[ Cure ] " << FB_DEFAULT
            << "Cure Destructor called" << std::endl;
}

/**
 * @brief Use cure
 * @param target
 */
void Cure::use(int &target) {
    std::cout << F_MAGENTA << "* heals "
              << target << "'s wounds *" << FB_DEFAULT << std::endl;
}

/**
 * @brief Clone cure
 * @return AMateria*
 */
AMateria *Cure::clone() const {
  std::cout << F_MAGENTA << "[ Cure ] " << FB_DEFAULT
            << "Cure Clone called" << std::endl;
  return (new Cure());
}
