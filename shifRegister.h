class shifRegister
{
private:
    char latchPin;
    char enablePin;
    char dataPin;
    char strobePin ;
public:
    shifRegister(char lathId, char enableId, char dataPinId, char strobePinId);
    ~shifRegister();
};

shifRegister::shifRegister(char lathId, char enableId, char dataPinId, char strobePinId)
{
    char latchPin = lathId;
    char enablePin = enableId;
    char dataPin = dataPinId;
    char strobePin = strobePinId;
}

shifRegister::~shifRegister()
{
}
