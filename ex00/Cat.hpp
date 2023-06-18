/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 23:25:27 by yena              #+#    #+#             */
/*   Updated: 2023/06/18 23:29:37 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP04_EX00_CAT_HPP_
#define CPP04_EX00_CAT_HPP_

# include <iostream>

class Cat : public Animal {
 public:
  Cat(void);
  Cat(const Cat &other);
  Cat &operator=(const Cat &other);
  ~Cat(void);
  void makeSound(void) const;
};

#endif //CPP04_EX00_CAT_HPP_
