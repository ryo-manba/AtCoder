
//最大公約数
ll gcd(ll a, ll b)
{
  if (a % b == 0)
  {
    return (b);
  }
  else
  {
    return (gcd(b, a%b));
  }
}

//最小公約数
ll lcm(ll a, ll b)
{
  return a * b /gcd(a, b);
}
