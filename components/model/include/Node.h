#include "open62541.h"
#include "driver/adc.h"

/* GPIO Numbers */
#define BLINK_GPIO 2
#define F_Nivel ADC1_CHANNEL_6
#define I_MOTOR 32
#define I_VALVULA 33
#define RELAY_2_GPIO 26
#define RELAY_3_GPIO 27

/* Led Method */
UA_StatusCode
ledProcessCallBack(UA_Server *server,
                   const UA_NodeId *sessionId, void *sessionHandle,
                   const UA_NodeId *methodId, void *methodContext,
                   const UA_NodeId *objectId, void *objectContext,
                   size_t inputSize, const UA_Variant *input,
                   size_t outputSize, UA_Variant *output);

void
addLEDMethod(UA_Server *server);

/* Nível */
UA_StatusCode
readCurrentNivel(UA_Server *server,
                const UA_NodeId *sessionId, void *sessionContext,
                const UA_NodeId *nodeId, void *nodeContext,
                UA_Boolean sourceTimeStamp, const UA_NumericRange *range,
                UA_DataValue *dataValue);

void
addCurrentNivelDataSourceVariable(UA_Server *server);

/* Motor */
UA_StatusCode
readMotorState(UA_Server *server,
                const UA_NodeId *sessionId, void *sessionContext,
                const UA_NodeId *nodeId, void *nodeContext,
                UA_Boolean sourceTimeStamp, const UA_NumericRange *range,
                UA_DataValue *dataValue);

UA_StatusCode
setMotorState(UA_Server *server,
                  const UA_NodeId *sessionId, void *sessionContext,
                  const UA_NodeId *nodeId, void *nodeContext,
                 const UA_NumericRange *range, const UA_DataValue *data);

void
addMotorControlNode(UA_Server *server);

/* Válvula */
UA_StatusCode
readValvulaState(UA_Server *server,
                const UA_NodeId *sessionId, void *sessionContext,
                const UA_NodeId *nodeId, void *nodeContext,
                UA_Boolean sourceTimeStamp, const UA_NumericRange *range,
                UA_DataValue *dataValue);

UA_StatusCode
setValvulaState(UA_Server *server,
                  const UA_NodeId *sessionId, void *sessionContext,
                  const UA_NodeId *nodeId, void *nodeContext,
                 const UA_NumericRange *range, const UA_DataValue *data);

void
addValvulaControlNode(UA_Server *server);