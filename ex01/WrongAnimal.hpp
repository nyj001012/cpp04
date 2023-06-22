/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 23:32:51 by yena              #+#    #+#             */
/*   Updated: 2023/06/22 13:57:29 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP04_EX00_WRONGANIMAL_HPP_
#define CPP04_EX00_WRONGANIMAL_HPP_

# include <iostream>
# include "font.hpp"

/**
 * @brief WrongAnimal class
 * @details WrongAnimal class is a base class of WrongCat class.
 */
class WrongAnimal {
 protected:
  std::string _type;

 public:
  WrongAnimal(void);
  WrongAnimal(const WrongAnimal &other);
  WrongAnimal &operator=(const WrongAnimal &other);
  virtual ~WrongAnimal(void);
  void makeSound(void) const;
  std::string getType(void) const;
};

#endif //CPP04_EX00_WRONGANIMAL_HPP_
