/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 20:59:23 by yena              #+#    #+#             */
/*   Updated: 2023/06/21 21:18:57 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP04_EX03_CHARACTER_HPP_
#define CPP04_EX03_CHARACTER_HPP_

# include "ICharacter.hpp"

/**
 * @brief Character class
 * @details This class is a derived class from ICharacter class.
 */
class Character : public ICharacter {
 private:
  std::string name;
  AMateria *inventory[4];
  int count;
 public:
  Character(void);
  Character(const std::string &name);
  Character(const Character &other);
  Character &operator=(const Character &other);
  ~Character(void);
  std::string const &getName(void) const;
  void equip(AMateria *m);
  void unequip(int idx);
  void use(int idx, ICharacter &target);
};

#endif //CPP04_EX03_CHARACTER_HPP_
