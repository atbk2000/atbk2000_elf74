
#include <iostream>

/* 6 -
  => As mensagens enviadas através do cout podem ser vistas
  através do terminal I/O
  => Leituras via cin podem ser feitas usando o terminal I/O
  => 
  __DATE__ = Aug 31 2022 (retorna a data corrente Mês/Dia/Ano)
  __TIME__ = 09:36:30 (retorna a hora corrente Hora/Minutos/Segundos)
  __FILE__ = C:\Users\anton\OneDrive\Documentos\UTFPR\Disciplinas\Sistemas Embarcados\elf74\atbk2000_elf74\Lab1\main.cpp
  (mostra a localização do arquivo que está sendo compilado)
  __LINE__ = 25 (contém o número da linha atual no arquivo sendo compilado)
  __STDC__ = 1 (definido como 1 quando o arquivo sendo compilado é escrito em C)
  __STDC_VERSION__ = 201710
  (definido quando compilado em C, 201710 quando /std:c17 é especificado)
  __ARM_ARCH = 7 (versão da arquitetura sendo usada pela placa)
  __ARM_ARCH_ISA_THUMB = 2
  (definido como 2 se as instruções T32 são suportadas, como na versão 7 de 
  arquitetura)
  __ARM_SIZEOF_MINIMAL_ENUM = 1
  (especifica o tamanho mínimo para enumeração)
  __ARM_SIZEOF_WCHAR_T = 4
  (mostra o tamanho de wchar em bytes, valor default é 4)
  __ARMVFP__  = 4
  (versão ARM VFP (Vector Floating Point) para operações com ponto flutuante)
  __CORE__ = 13
  (versão do núcleo sendo usado)

*/

int main()
{
  
  std::cout << "Apresentando valores de símbolos pré-definidos:\n";
  
  std::cout << "__DATE__ = " << __DATE__ << std::endl;
  
  std::cout << "__TIME__ = " << __TIME__ << std::endl;
  
  std::cout << "__FILE__ = " << __FILE__ << std::endl;
  
  std::cout << "__LINE__ = " << __LINE__ << std::endl;
  
  std::cout << "__STDC__ = " << __STDC__ << std::endl;
  
  std::cout << "__STDC_VERSION__ = " << __STDC_VERSION__ << std::endl;
  
  std::cout << "__ARM_ARCH = " << __ARM_ARCH << std::endl;
  
  std::cout << "__ARM_ARCH_ISA_THUMB = " << __ARM_ARCH_ISA_THUMB << std::endl;
  
  std::cout << "__ARM_SIZEOF_MINIMAL_ENUM = " << __ARM_SIZEOF_MINIMAL_ENUM << std::endl;
  
  std::cout << "__ARM_SIZEOF_WCHAR_T = " << __ARM_SIZEOF_WCHAR_T << std::endl;
  
  std::cout << "__ARMVFP__  = " << __ARMVFP__  << std::endl;
  
  std::cout << "__CORE__ = " << __CORE__ << std::endl;
  
  std::cout << "Agora digite um valor: ";
  
  float valor = 0.0;
  float valor2 = 3.7;
  
  std::cin >> valor;
  
  std::cout << std::endl << valor << " + " << valor2 << " = ";
  valor += valor2;
  std::cout << valor;
  
  
  
  return 0;
}
