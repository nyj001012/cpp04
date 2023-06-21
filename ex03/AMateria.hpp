/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 20:04:51 by yena              #+#    #+#             */
/*   Updated: 2023/06/21 20:44:02 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP04_EX03_AMATERIA_HPP_
#define CPP04_EX03_AMATERIA_HPP_

/**
 * @brief AMateria class
 * @details This class is an abstract class.
 */
class AMateria {
 protected:
  std::string _type;

 public:
  AMateria(std::string const &type);
  std::string const &getType() const; //Returns the materia type
  virtual AMateria *clone() const = 0;
  virtual void use(ICharacter &target);
};

#endif //CPP04_EX03_AMATERIA_HPP_
