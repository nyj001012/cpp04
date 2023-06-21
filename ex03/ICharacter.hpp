/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 20:11:04 by yena              #+#    #+#             */
/*   Updated: 2023/06/21 21:59:31 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP04_EX03_ICHARACTER_HPP_
#define CPP04_EX03_ICHARACTER_HPP_

# include <iostream>
# include "font.hpp"
# include "AMateria.hpp"
# define SLOT_MAX 4

class AMateria;

class ICharacter {
 public:
  virtual ~ICharacter(void) {}
  virtual std::string const &getName(void) const = 0;
  virtual void equip(AMateria *m) = 0;
  virtual void unequip(int idx) = 0;
  virtual void use(int idx, ICharacter &target) = 0;
};

#endif //CPP04_EX03_ICHARACTER_HPP_
