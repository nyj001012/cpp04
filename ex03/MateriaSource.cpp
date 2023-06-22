/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 20:14:35 by yena              #+#    #+#             */
/*   Updated: 2023/06/21 21:58:34 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) {
  std::cout << F_GREEN << "[ MateriaSource ] " << FB_DEFAULT
            << "MateriaSource Constructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &other) {
  std::cout << F_GREEN << "[ MateriaSource ] " << FB_DEFAULT
            << "MateriaSource Copy Constructor called" << std::endl;
  if (this != &other)
    *this = other;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other) {
  std::cout << F_GREEN << "[ MateriaSource ] " << FB_DEFAULT
            << "MateriaSource Assignation Operator called" << std::endl;
  for (int i = 0; i < 4; i++) {
    if (this->_materia[i] != NULL)
      delete this->_materia[i];
    this->_materia[i] = other._materia[i]->clone();
  }
  return (*this);
}

MateriaSource::~MateriaSource(void) {
  std::cout << F_GREEN << "[ MateriaSource ] " << FB_DEFAULT
            << "MateriaSource Destructor called" << std::endl;
}

/**
 * @brief Learn materia
 * @param materia
 */
void MateriaSource::learnMateria(AMateria *materia) {
  std::cout << F_GREEN << "[ MateriaSource ] " << FB_DEFAULT
            << "MateriaSource learnMateria called" << std::endl;
  int i = 0;
  while (this->_materia[i] != NULL)
    i++;
  this->_materia[i] = materia;
}

/**
 * @brief Create materia
 * @param type
 * @return AMateria*
 */
AMateria *MateriaSource::createMateria(std::string const &type) {
  std::cout << F_GREEN << "[ MateriaSource ] " << FB_DEFAULT
            << "MateriaSource createMateria called" << std::endl;
  int i = 0;
  while (this->_materia[i] != NULL) {
    if (this->_materia[i]->getType() == type)
      return (this->_materia[i]->clone());
    i++;
  }
  return (0);
}
