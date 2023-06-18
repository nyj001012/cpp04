/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 23:46:18 by yena              #+#    #+#             */
/*   Updated: 2023/06/18 23:50:32 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP04_EX01_BRAIN_HPP_
#define CPP04_EX01_BRAIN_HPP_

# include <iostream>

class Brain {
 private:
  std::string ideas[100];

 public:
  Brain();
  Brain(const Brain& other);
  ~Brain();
  Brain& operator=(const Brain& other);
  std::string getIdea(int idx) const;
  void setIdea(int idx, std::string idea);
};

#endif //CPP04_EX01_BRAIN_HPP_
