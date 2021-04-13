-- MySQL dump 10.13  Distrib 8.0.23, for Linux (x86_64)
--
-- Host: localhost    Database: Shevchenko
-- ------------------------------------------------------
-- Server version	8.0.23

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!50503 SET NAMES utf8mb4 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `P`
--

DROP TABLE IF EXISTS `P`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `P` (
  `Д` char(5) NOT NULL,
  `Название` char(20) DEFAULT NULL,
  `Цвет` char(30) DEFAULT NULL,
  `Вес` decimal(10,0) DEFAULT NULL,
  `ГОРОД` char(20) DEFAULT NULL,
  PRIMARY KEY (`Д`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `P`
--

LOCK TABLES `P` WRITE;
/*!40000 ALTER TABLE `P` DISABLE KEYS */;
INSERT INTO `P` VALUES ('P1','Гайка','Красный',12,'Москва'),('P2','Болт','Черный',17,'Киев'),('P3','Винт','Голубой',17,'Ростов'),('P4','Винт','Красный',14,'Москва'),('P5','Шпилька','Голубой',12,'Киев'),('P6','Палец','Красный',19,'Москва');
/*!40000 ALTER TABLE `P` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `S`
--

DROP TABLE IF EXISTS `S`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `S` (
  `П` char(5) NOT NULL,
  `ИМЯ` char(20) DEFAULT NULL,
  `СТАТУС` decimal(10,0) DEFAULT NULL,
  `ГОРОД` char(20) DEFAULT NULL,
  PRIMARY KEY (`П`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `S`
--

LOCK TABLES `S` WRITE;
/*!40000 ALTER TABLE `S` DISABLE KEYS */;
INSERT INTO `S` VALUES ('S1','Вениамин',20,'Москва'),('S2','Алексей',10,'Киев'),('S3','Федор',30,'Киев'),('S4','Игорь',20,'Москва'),('S5','Вадим',30,'Минск');
/*!40000 ALTER TABLE `S` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `SP`
--

DROP TABLE IF EXISTS `SP`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `SP` (
  `П` char(5) NOT NULL,
  `Д` char(5) NOT NULL,
  `Количество` int DEFAULT NULL,
  PRIMARY KEY (`П`,`Д`),
  KEY `Д` (`Д`),
  CONSTRAINT `SP_ibfk_1` FOREIGN KEY (`П`) REFERENCES `S` (`П`),
  CONSTRAINT `SP_ibfk_2` FOREIGN KEY (`Д`) REFERENCES `P` (`Д`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `SP`
--

LOCK TABLES `SP` WRITE;
/*!40000 ALTER TABLE `SP` DISABLE KEYS */;
INSERT INTO `SP` VALUES ('S1','P1',300),('S1','P2',200),('S1','P3',400),('S1','P4',200),('S1','P5',100),('S1','P6',100),('S2','P1',300),('S2','P2',400),('S3','P2',200),('S4','P2',200),('S4','P4',300),('S4','P5',400);
/*!40000 ALTER TABLE `SP` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2021-03-15 14:48:45
