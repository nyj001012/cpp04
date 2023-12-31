/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 23:25:27 by yena              #+#    #+#             */
/*   Updated: 2023/06/22 14:02:42 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP04_EX00_CAT_HPP_
#define CPP04_EX00_CAT_HPP_

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

/**
 * @brief Cat class
 * @details Cat class is a derived class of Animal class.
 * It has a type, brain member variable and makeSound member function.
 */
class Cat : public Animal {
 private:
  Brain *_brain;

 public:
  Cat(void);
  Cat(const Cat &other);
  Cat &operator=(const Cat &other);
  ~Cat(void);
  void makeSound(void) const;
  std::string getIdea(int idx) const;
  void setIdea(int idx, std::string idea);
};

#endif //CPP04_EX00_CAT_HPP_
