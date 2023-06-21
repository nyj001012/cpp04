/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 20:04:51 by yena              #+#    #+#             */
/*   Updated: 2023/06/21 21:54:57 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP04_EX03_AMATERIA_HPP_
#define CPP04_EX03_AMATERIA_HPP_

# include <iostream>
# include "ICharacter.hpp"
# include "font.hpp"

class ICharacter;

/**
 * @brief AMateria class
 * @details This class is an abstract class.
 */
class AMateria {
 protected:
  std::string _type;

 public:
  AMateria(void);
  AMateria(std::string const &type);
  AMateria(const AMateria &other);
  AMateria &operator=(const AMateria &other);
  virtual ~AMateria(void);
  std::string const &getType() const; //Returns the materia type
  virtual AMateria *clone() const = 0;
  virtual void use(ICharacter &target);
};

#endif //CPP04_EX03_AMATERIA_HPP_
