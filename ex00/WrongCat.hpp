/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 23:34:55 by yena              #+#    #+#             */
/*   Updated: 2023/06/18 23:35:19 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP04_EX00_WRONGCAT_HPP_
#define CPP04_EX00_WRONGCAT_HPP_

class WrongCat : public WrongAnimal {
 public:
  WrongCat(void);
  WrongCat(const WrongCat &other);
  WrongCat &operator=(const WrongCat &other);
  ~WrongCat(void);
  void makeSound(void) const;
};

#endif //CPP04_EX00_WRONGCAT_HPP_
