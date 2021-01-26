HAL_StatusTypeDef result = HAL_ERROR;
	for(i = 1;i<128;i++)
	{
		result = HAL_I2C_IsDeviceReady(&hi2c1,i<<1,1,10);
		if (result == HAL_OK)
		{ 
			i = i;
			break;
		}
	}
