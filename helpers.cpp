#include <string>

/*
 * <is_vowel>
 *
 * <The function checks if a character is a vowel or not>
 *
 * input: <parameter- character a>
 * output: <The functions a bool value(true if the parameter is a vowel, else false)>
 */


bool is_vowel(char a) {
	if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u') {
		return true;

	}
	else {
		return false;
	}

}



/*
 * <is_consonant>
 *
 * <This funciton checks if the passed value is a consonant or not>
 *
 * input: <It takes a character as the only parameter>
 * output: <The function returns a bool value . It returns true if the parameter is a consonant, else it returns false>
 */

bool is_consonant(char a) {
	if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u') {
		return false;
	}

	else {
		return true;
	}



}


/*
 * <ends_with>
 *
 * <It checks if the candidate ends with the given suffix or not>
 *
 * input: <It takes 2 strings as its parameters for the candidate and the siffix>
 * output: <It returns a bool vvalue. If the candidate and strong both are empty, it returns true>
 *         <If candidate is empty, but the suffix isn't then it returns false>
 *          <If the candidate ends with suffix, then it returns true, else it gives false >
 */



bool ends_with(std::string candidate, std::string suffix) {
	if (candidate == "" && suffix == "") {
		return true;

	}
	else if (candidate == "" && suffix != "") {
		return false;

	}
	else if (candidate != "" && suffix == "") {
		return true;

	}
	if (candidate.length() < suffix.length())
	{
		return false;
	}
	int length_of_suffix = suffix.length();
	int length_of_candidate = candidate.length();
	std::string end_of_candidate = candidate.substr(length_of_candidate - length_of_suffix, candidate.length() - 1);
	if (end_of_candidate == suffix) {
		return true;

	}
	else if (end_of_candidate != suffix) {
		return false;
	}
}

/*
* <ends_with_double_consonant>
*
* <Checks if the last two characters of the string are both consonants and equal to each other>
*
* input: <The only parameter is string(a)>
* output: <It returns a bool value. It gives true if the condition above is satisfies, else it gives a false value>
*/

bool ends_with_double_consonant(std::string a) {
	if (a.length() < 2) {
		return false;
	}

	char second_last_char = a.at(a.length() - 2);
	char last_char = a.at(a.length() - 1);
	if (is_consonant(second_last_char) && is_consonant(last_char)) {
		if (second_last_char == last_char) {
			return true;
		}
		else {
			return false;
		}


	}
	else {
		return false;
	}

}



/*
 * <ends_with_cvc>
 *
 * <It checks if the last three characters of the string are consonant, vowel, and a consonant>
 *
 * input: <It only takes a string a as the parameter>
 * output: <It return a bool value. True,if the last three characters are of the form consonant, vowel, and consonant.>
 */




bool ends_with_cvc(std::string a) {
	if (a.length() < 3)
	{
		return false;
	}

	if ((is_consonant(a.at(a.length() - 3))) && (is_vowel(a.at(a.length() - 2))) && (is_consonant(a.at(a.length() - 1)))) {
		return true;
	}
	else {
		return false;
	}



}




/*
 * <count_consonants_at_front>
 *
 * <It counts the consecutive consonants from the starting of the string>
 *
 * input: <It just takes one string a, as a parameter>
 * output: <The function outputs an int , which is the number of consonants at the front>
 */


int count_consonants_at_front(std::string a) {
	// int n = a.length();
	int const_present{ 0 };

	for (char c : a)
	{
		if (is_consonant(c))
		{
			const_present++;

		}
		else {

			break;
		}

	}
	return const_present;
}

/*
* <count_vowels_at_back>
*
* <It counts the number of vowels starting from the back, of a string>
*
* input: <It only accepts one parameter which is a string>
* output: <IT outputs an int. It is the number of vowels at the back of a string>
*/


int count_vowels_at_back(const std::string a) {
	int count = 0;
	int i = a.length() - 1;
	while (i >= 0 && is_vowel(a[i])) {
		count++;
		i--;
	}
	return count;


}


/*
* <contains_vowels>
*
* <It checks if there is a vowel present anywhere in the string>
*
* input: <It takes a string as the parameter>
* output: <It returns true if there is a vowel present anywhere in the string>
*/

bool contains_vowel(std::string a) {
	if (a == "")
	{
		return false;
	}
	for (char c : a)

	{
		if (is_vowel(c))
		{
			return true;

		}


	}
	return false;


}

/*



 * <new_ending>
 *
 * <It creates a new string by removign the specified suffix and inserts a new string at it's end>
 *
 * input: <It accepts a string(candidate), an integer suffix_length, and another strign(replacement)>
 * output: <It returns the new string with the replacement strign attached>
 */

std::string new_ending(const std::string candidate, int suffix_length, const std::string replacement) {

	std::string new_string = candidate.substr(0, candidate.length() - suffix_length);
	new_string.append(replacement);
	return new_string;
}
