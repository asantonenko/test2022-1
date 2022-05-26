#ifndef TESTCLASS_H
#define TESTCLASS_H


class TestClass
{
    public:
        /** Default constructor */
        TestClass();
        /** Default destructor */
        virtual ~TestClass(){}

        /** Access m_Counter
         * \return The current value of m_Counter
         */
        unsigned int getCounter() { return m_Counter; }
        /** Set m_Counter
         * \param val New value to set
         */
        void setCounter(unsigned int val) { m_Counter = val; }

    protected:

    private:
        unsigned int m_Counter; //!< Member variable "m_Counter"
};

#endif // TESTCLASS_H
