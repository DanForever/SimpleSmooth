
#ifndef __SIMPLE_SMOOTH_H__
#define __SIMPLE_SMOOTH_H__

template <int Size = 16, typename Type = int>
class SimpleSmooth
{
private:
	Type m_data[Size];
	Type m_total = 0;
	Type m_average = 0;
	Type m_lastRead = 0;

public:
	SimpleSmooth()
	{
		Clear(0);
	}
	
	void Clear(Type clearValue)
	{
		for(int i = 0; i<Size; i++)
			m_data[i] = clearValue;
	}

	Type Add(Type value)
	{
		m_total -= m_data[m_lastRead];
		m_data[m_lastRead] = value;
		m_total += value;
		m_lastRead++;

		if(m_lastRead >= Size)
			m_lastRead = 0;

		m_average = m_total / Size;

		return m_average;
	}

	Type Average() const { return m_average; }
};

#endif
