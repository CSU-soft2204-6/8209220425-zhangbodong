double celsius_to_fah(double cel)//���ϵ��H
{
	double fah;
	fah = cel * 1.8 + 32;
	return fah;
}
double fahrenheit_to_cels(double fah)//�H����
{
	double cel;
	cel = (fah - 32) / 1.8;
	return cel;
}