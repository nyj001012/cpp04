/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMeteriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 20:14:35 by yena              #+#    #+#             */
/*   Updated: 2023/06/21 20:14:49 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP04_EX03_IMETERIASOURCE_HPP_
#define CPP04_EX03_IMETERIASOURCE_HPP_

class IMeteriaSource {
 public:
  virtual ~IMateriaSource() {}
  virtual void learnMateria(AMateria *) = 0;
  virtual AMateria *createMateria(std::string const &type) = 0;
};

#endif //CPP04_EX03_IMETERIASOURCE_HPP_
