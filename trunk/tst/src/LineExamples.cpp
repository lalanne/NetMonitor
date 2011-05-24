#include "LineExamples.hpp"

using namespace std;

const string LineExamples::line =
        "2011-03-07 17:34:35.785128 1c:af:f7:05:c7:86 > 00:23:4e:9f:cf:f7, IPv4, length 890: 199.59.148.20.443 > 192.168.1.3.55925: tcp 836";
const string LineExamples::lineWith2CharactersLenght =
        "2011-03-09 01:05:00.359547 1c:af:f7:05:c7:86 > 00:23:4e:9f:cf:f7, IPv4, length 66: 200.27.57.13.80 > 192.168.1.3.35227: tcp 0";
const string LineExamples::lineWith3CharactersLenght =
        "2011-03-07 17:34:35.785128 1c:af:f7:05:c7:86 > 00:23:4e:9f:cf:f7, IPv4, length 890: 199.59.148.20.443 > 192.168.1.3.55925: tcp 836";
const string LineExamples::lineWith4CharactersLenght =
        "2011-03-09 12:48:48.756365 1c:af:f7:05:c7:86 > 00:23:4e:9f:cf:f7, IPv4, length 1496: 200.27.57.9.1935 > 192.168.1.3.34430: tcp 1430";
const string LineExamples::lineIcmpUnreacheable =
        "2011-03-12 12:50:38.519637 1c:af:f7:05:c7:86 > 00:23:4e:9f:cf:f7, IPv4, length 70: 192.168.1.1 > 192.168.1.3: ICMP host 74.125.77.101 unreachable, length 36";
const string LineExamples::line802_3 =
        "2011-05-15 16:07:00.039256 00:15:c7:29:ce:30 > ff:ff:ff:ff:ff:ff, 802.3, length 285: LLC, dsap SNAP (0xaa) Individual, ssap SNAP (0xaa) Command, ctrl 0x03: oui Unknown (0x004096), pid Unknown (0x0000): Unnumbered, ui, Flags [Command], length 271";
const string LineExamples::dateLine = "2011-03-07";
const string LineExamples::destinationIpLine = "192.168.1.3";
const string LineExamples::destinationPortLine = "55925";
const string LineExamples::sourceIpLine = "199.59.148.20";
const string LineExamples::sourcePortLine = "443";
const string LineExamples::timeLine = "17:34:35.785128";
const string LineExamples::ipVersion4 = "IPv4";
const string LineExamples::packetLenghtLine = "890";
const string LineExamples::dateLineWith2CharactersLenght = "2011-03-09";
const string LineExamples::destinationIpLineWith2CharactersLenght = "192.168.1.3";
const string LineExamples::destinationPortLineWith2CharactersLenght = "35227";
const string LineExamples::sourceIpLineWith2CharactersLenght = "200.27.57.13";
const string LineExamples::sourcePortLineWith2CharactersLenght = "80";
const string LineExamples::packetLenghtLineWith2CharactersLenght = "66";
const string LineExamples::dateLineWith3CharactersLenght = "2011-03-07";
const string LineExamples::destinationIpLineWith3CharactersLenght = "192.168.1.3";
const string LineExamples::destinationPortLineWith3CharactersLenght = "55925";
const string LineExamples::sourceIpLineWith3CharactersLenght = "199.59.148.20";
const string LineExamples::sourcePortLineWith3CharactersLenght = "443";
const string LineExamples::packetLenghtLineWith3CharactersLenght = "890";
const string LineExamples::dateLineWith4CharactersLenght = "2011-03-09";
const string LineExamples::destinationIpLineWith4CharactersLenght = "192.168.1.3";
const string LineExamples::destinationPortLineWith4CharactersLenght = "34430";
const string LineExamples::sourceIpLineWith4CharactersLenght = "200.27.57.9";
const string LineExamples::sourcePortLineWith4CharactersLenght = "1935";
const string LineExamples::packetLenghtLineWith4CharactersLenght = "1496";
const string LineExamples::dateLineIcmpUnreacheable = "2011-03-09";
const string LineExamples::destinationIpLineIcmpUnreacheable = "192.168.1.3";
const string LineExamples::destinationPortLineIcmpUnreacheable = "";
const string LineExamples::sourceIpLineIcmpUnreacheable = "192.168.1.1";
const string LineExamples::sourcePortLineIcmpUnreacheable = "";
const string LineExamples::destinationIpLine802_3 = "";
const string LineExamples::destinationPortLine802_3 = "";
const string LineExamples::sourceIpLine802_3 = "";
const string LineExamples::sourcePortLine802_3 = "";
