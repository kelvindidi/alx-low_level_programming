/**
 * is_prime_recursive - Helper function to check primality recursively.
 * @n: The number to check for primality.
 * @divisor: The current divisor to test.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_recursive(int n, int divisor)
{
	if (divisor == 1)
		return (1);

	if (n % divisor == 0)
		return (0);

	return (is_prime_recursive(n, divisor - 1));
}




/**
 * is_prime_number - Check if a number is prime.
 * @n: The number to check.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (is_prime_recursive(n, n - 1));
}
