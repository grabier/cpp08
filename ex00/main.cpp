/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 16:45:41 by gmontoro          #+#    #+#             */
/*   Updated: 2025/05/31 13:35:29 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"


int main(void)
{
	//Vector
	std::vector<int> array;
	array.insert(array.end(), 2);
	for(int i = 0; i < 0; i++)
		array.push_back(i);
	/* std::vector<int>::iterator it = array.begin();
	std::vector<int>::iterator itend = array.end();
	while(it != itend)
	{
		std::cout << (*it) << std::endl;
		it++;
	} */
	std::cout << "Vector: ";
	try{
		::easyfind(array, 5);
	}
	catch(std::exception &e){
		std::cout << e.what();
	}
	
	// list
	std::cout << "List: ";
	std::list<int> lst;
	for(int i = 0; i < 8; i++)
		lst.push_back(i);
	try{
		::easyfind(lst, 3);
	}
	catch(std::exception &e){
		std::cout << e.what();
	}
	

	//Deque
	std::cout << "Deque: ";
	std::deque<int> dqd;
	for(int i = 0; i < 8; i++)
		dqd.push_back(i);
	try{
		easyfind(dqd, 70);
	}
	catch(std::exception &e){
		std::cout << e.what();
	}
	return 0;
}