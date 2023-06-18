/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 23:32:51 by yena              #+#    #+#             */
/*   Updated: 2023/06/18 23:34:36 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP04_EX00_WRONGANIMAL_HPP_
#define CPP04_EX00_WRONGANIMAL_HPP_

# include <iostream>

/**
 * @brief WrongAnimal class
 * @details WrongAnimal class is a base class of WrongCat class.
 */
class WrongAnimal {
 protected:
  std::string type;

 public:
  WrongAnimal(void);
  WrongAnimal(const WrongAnimal &other);
  WrongAnimal &operator=(const WrongAnimal &other);
  virtual ~WrongAnimal(void);
  void makeSound(void) const;
};

#endif //CPP04_EX00_WRONGANIMAL_HPP_
