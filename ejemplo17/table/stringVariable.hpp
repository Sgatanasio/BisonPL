/*!	
	\file    numericVariable.hpp
	\brief   Declaration of NumericVariable class
	\author  
	\date    2017-12-1
	\version 1.0
*/

#ifndef _STRINGVARIABLE_HPP_
#define _STRINGVARIABLE_HPP_

#include <string>
#include <iostream>

#include "variable.hpp"

/*!	
	\namespace lp
	\brief Name space for the subject Language Processors
*/
namespace lp{

/*!	
  \class NumericVariable
  \brief Definition of atributes and methods of NumericVariable class
  \note  NumericVariable Class publicly inherits from Variable class
*/
class StringVariable:public lp::Variable
{
/*!		
\name Private atributes of NumericVariable class
*/
	private:
    std::string      _value;   //!< \brief Numeric value of the NumericVariable

/*!		
\name Public methods of NumericVariable class
*/
	public:

/*!	
	\name Constructors
*/
		
/*!		
	\brief Constructor with arguments with default values
	\note  Inline function that uses Variable's constructor as members initializer
	\param name: name of the NumericVariable
	\param token: token of the NumericVariable
	\param type: type of the NumericVariable
	\param value: numeric value of the NumericVariable
	\pre   None
	\post  A new NumericVariable is created with the values of the parameters
	\sa   setName, setValue
*/
inline StringVariable(std::string name="", int token = 0, int type = 0, std::string value=""): 
 	Variable(name,token,type)
	{
		this->setValue(value);
	}
		
/*!		
	\brief Copy constructor
	\note  Inline function
	\param n: object of NumericVariable class
	\pre   None
	\post  A new NumericVariable is created with the values of an existent NumericVariable
	\sa    setName, setValue
*/
	StringVariable(const StringVariable & n)
	{
		// Inherited methods
		this->setName(n.getName());

		this->setToken(n.getToken());

		this->setType(n.getType());
		
		// Own method
		this->setValue(n.getValue());
	}


/*!	
	\name Observer
*/
	
/*!	
	\brief  Public method that returns the value of the NumericVariable
	\note   Función inline
	\pre    None
	\post   None
    \return Value of the NumericVariable
	\sa		getValue
*/
	inline std::string getValue() const
	{
		return this->_value;
	}



/*!	
	\name Modifier
*/
		
/*!	
	\brief   This functions modifies the value of the NumericVariable
	\note    Inline function
	\param   value: new value of the NumericVariable
	\pre     None
	\post    The value of the NumericVariable is equal to the parameter 
	\return  void
	\sa 	 setValue
*/
	inline void setValue(const std::string & value)
	{
	    this->_value = value;
	}



		
/*!	
	\name I/O Functions
*/
		
/*!		
	\brief Read a NumericVariable
	\pre   None
	\post  The atributes of the NumericVariable are modified with the read values
    \sa    write
*/
	void read();

	
/*!		
	\brief Write a NumericVariable
	\pre   None
	\post  None
    \sa    read
*/
	void write() const;


/*!	
	\name Operators
*/
	
/*!		
	\brief  Assignment Operator
	\param  n: objectoof NumericVariable class
	\post   The atributes of this object are equal to the atributes of the parameter
	\return Reference to this object
*/
	StringVariable &operator=(const StringVariable &n);
	
	 //! \name Friend functions
/*!		
	\brief  Insertion operator
	\param  i: input stream
	\param  n: object of StringVariable class
	\pre    nome
	\post   The atributes of the StringVariable are modified with the inserted values from the input stream
	\return The input stream
*/
	friend std::istream &operator>>(std::istream &i, StringVariable &n);

/*!		
	\brief  Extraction operator
	\param  o: output stream
	\param  n: object of StringVariable class
	\pre    nome
	\post   The atributes of the StringVariable are written in the output stream
	\return The output stream
*/
	friend std::ostream &operator<<(std::ostream &o, StringVariable const &n);
	
// End of NumericVariable class
};

// End of name space lp
}

// End of _NUMERICVARIABLE_HPP_
#endif
